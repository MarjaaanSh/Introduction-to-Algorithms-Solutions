#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int key;
        Node* left;
        Node* right;

    // Node(): key(-1), left(nullptr), right(nullptr) {}
};

class BinarySearchTree{
    public:
        Node* root;
        void addKey(int &key);
        void displayTree();
        Node* search(Node* &root, int &key);
        Node* searchKey(int &key);
        Node* getPredecessor(int& key);
        Node* getFather(int& key);
        void deleteKey(int& key);

        BinarySearchTree(): root(nullptr){}
};

Node* BinarySearchTree::getFather(int& key){
    if(root->key==key)
        return nullptr;

    Node* father = root;
    Node* child;
    while(true){
        if(key < father->key)
            child = father->left;
        else
            child = father->right;
        if(child->key!=key)
            father = child;
        else
            return father;
    }
}

Node* BinarySearchTree::getPredecessor(int& key){
    Node* key_ptr = searchKey(key);
    Node* current = key_ptr->left;
    Node* pred;
    if ((key_ptr==nullptr) || (current==nullptr)){
        cout << "Key doesn't exist, or it doesn't have any predecessor!";
    }
    else
    {
        while(current!=nullptr){
            pred = current;
            current = current->right;
        }
    }
    return pred;
}

Node* BinarySearchTree::searchKey(int &key){
    Node* key_ptr = search(root, key);
    if (key_ptr == nullptr)
        cout << "Not Found!" << endl;
    return key_ptr;
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
    Node* parent = root;
    while (current != nullptr) {
        parent = current;
        if(key < current->key)
            current = current->left;
        else
            current = current->right;
    }

    if(key < parent->key)
        {
            parent->left = new Node();
            parent->left->key = key ;
        }
    else
        {
            parent->right = new Node();
            parent->right->key = key ;
        }
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
    vector<int> keys = {8, 5, 9, 2, 6, 7, 11};
    BinarySearchTree bst;

    for(auto& key: keys)
    {
        bst.addKey(key);
    }
    // bst.displayTree();

    int key = 4;
    bst.addKey(key);
    // bst.displayTree();
    
    // key = 2;
    // bst.searchKey(key);    
    
    key = 5;
    // cout << bst.getPredecessor(key)->key ;
    key = 11;
    Node* res = bst.getFather(key);
    cout << res->key;
    return 0;
}