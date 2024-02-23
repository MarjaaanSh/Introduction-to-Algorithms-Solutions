#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int key;
        Node* left;
        Node* right;

    Node(): key(-1), left(nullptr), right(nullptr) {}
};

class BinarySearchTree{
    public:
        Node* root = new Node();
        Node* search(Node* &root, int &key);
        void searchKey(int &key);
        void addKey(int &key);
        void displayTree();
        void test(vector<int> &keys);
};

void BinarySearchTree::test(vector<int> &keys){

    for(int i = 0; i < keys.size(); i++){
        addKey(keys[i]);
    }
    
    
}

void BinarySearchTree::searchKey(int &key){
    Node* key_ptr = search(root, key);
    if (key_ptr == nullptr)
        cout << "Not Found!" << endl;
    else
        cout << key_ptr << endl;
}

Node* BinarySearchTree::search(Node* &key_ptr, int &key){
    if(key_ptr==nullptr || key_ptr->key == key)
        return key_ptr;
    else if(key < key_ptr->key)
        return search(key_ptr->left, key);
    else
        return search(key_ptr->right, key);
}

void BinarySearchTree::addKey(int &key){

    if (root == nullptr){
        root = new Node();
        root->key = key;
        return;
    }    
    Node* current = root;
    Node* next = root;
    Node* parent;
    cout << root->key << endl;
    // while (next != nullptr) {
    //     if(key < current->key)
    //         {next = current->left;}
    //     else
    //         {next = current->right;}
    //     parent = current;
    //     current = next;
    // }

    // if(key < parent->key)
    //     {parent->left = new Node();
    //     parent->left->key = key ;}
    // else
    //     {parent->right = new Node();
    //     parent->right->key = key ;}

    return;
}

void BinarySearchTree::displayTree(){
    int idx = 0;
    Node* current = root;
    vector<Node*> queue = {current};
    while(idx < queue.size()){
        cout << current->key << ", " ;
        if(current->left != nullptr)
            queue.push_back(current->left);
        if(current->right !=nullptr)
            queue.push_back(current->right);
        idx ++;
        current = queue[idx];
    }
    cout << endl;

}
int main()
{ 
    vector<int> keys = {8, 5};//, 9, 2, 6, 7, 11};
    BinarySearchTree bst;
    bst.test(keys);
    // bst.displayTree();

    // int key = 4;
    // bst.addKey(key);
    // bst.displayTree();
    
    //key = 2;
    //bst.searchKey(key);    
    
    return 0;
}