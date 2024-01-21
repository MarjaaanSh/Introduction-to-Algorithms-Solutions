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
        Node* root;
        Node* search(Node* &root, int &key);
        void searchKey(int &key);
        void displayTree(Node* &root);

    BinarySearchTree(Node* &root): root(root){}


};

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


void BinarySearchTree::displayTree(Node* &root){
    vector<Node*> queue;
    int idx = 0;
    Node* current = root;
    while(current != nullptr){
        cout << current->key << ", " ;
        queue.push_back(current->left);
        queue.push_back(current->right);
        current = queue[idx];
        idx ++;
    }
    cout << endl;

}
int main()
{ // 8: 5, 9
  // 5: 2, 6
  // 9: 7, 11

    Node* root = new Node();
    root -> key = 8;

    root -> left = new Node();
    root -> right = new Node();

    root -> left -> key = 5;
    root -> right -> key = 9;

    root -> left -> left = new Node();
    root -> left -> right = new Node();

    root -> left -> left -> key = 2;
    root -> left -> right -> key = 6;

    root -> right -> left = new Node();
    root -> right -> right = new Node();

    root -> right -> left -> key = 7;
    root -> right -> right -> key = 11;

    BinarySearchTree bst(root);
    bst.displayTree(root);

    int key = -12;
    bst.searchKey(key);    
    
    return 0;
}