#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
    Node(): data(-1), next(nullptr) {};
};

class LinkedList{
    public:
        Node* head = new Node();

    LinkedList(int arr[]){
        head -> data = *arr;
        Node* current = head;
        arr++;

       while( *arr != -1){
            current -> next = new Node();
            current = current -> next;
            current -> data = *arr;
            arr++;
        }

    }

        void displayLinkedList();
        void insertNode(int &val, int &pos);
        void deleteNode(int &key);
};

void LinkedList::displayLinkedList(){
    if (head->data != -1){
        cout << head->data << "->";
        Node* current = head->next;
        while(current != nullptr){
            cout << current->data << "->";
            current = current -> next;
        }
        cout << endl;
        delete current;
    }
    else {cout << "The Linked List is Empty!" << endl;}
}

void LinkedList::insertNode(int &key, int &pos){

    Node* new_node = new Node();
    new_node -> data = key;

    if(pos == 0){
        new_node -> next = head;
        head = new_node;
    }
    else{
        Node* prev = head;
        for(int cntr = 1; cntr < pos; cntr++){
        prev = prev->next;
        }
        new_node -> next = prev->next;
        prev->next = new_node;
    }

}

void LinkedList::deleteNode(int &key){
    if(head->data == key){
        Node* current = head;
        head = head->next;
        delete current;
    }
    else{
        Node* prev = nullptr;
        Node* current = head;
        while(current->data!=key){
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        delete current;
    }
}

int main(){
    int arr[] = {2, 3, 1, -1};
    LinkedList ll(arr);
    ll.displayLinkedList();

    int key1 = 200;
    int pos = 3;
    ll.insertNode(key1, pos);
    ll.displayLinkedList();

    int key2 = 200;
    ll.deleteNode(key2);
    ll.displayLinkedList();
    return 0;
}