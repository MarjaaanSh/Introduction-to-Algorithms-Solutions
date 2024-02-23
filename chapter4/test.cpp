#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        Node* left;
        Node* right;

    Node(): key(-1), left(nullptr), right(nullptr) {}
};

class test{
    public:
        int x;
        int y;
        test();
        void doe(vector<int> l);
        void show();
        void doo(int i);
        // void add(int i, int p);
};

test::test(){
    for(int i=0 ; i < 2; i++){
        doo(i);
    }
}
void test::doo(int i){
    if(i==0){
        x = 1;
        return;
    }
    y = x+1;
    return;
}

// void test::doe(vector<int> l){
//     for(int i=0; i<l.size(); i++){
//         if(i==0){
//             vec[i] = 3;
//             continue;
//         }
//         vec[i] = vec[i-1] + 7;
//     }
//     return;

// }

// void test::add(int i, int p){
//     if(i==0){
//         vec[i] = 3;
//         return;
//     }
//     vec[i] = vec[i-1] + 7;
//     return;
// }

// 3, 10, 17

void test::show(){
    cout << x << y << endl;
}


int main(){
    // vector<int> vec1 = {1, 2, 3};
    test t;
    // t.doe(vec1);
    t.show();
    return 0;
}