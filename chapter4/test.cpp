#include<iostream>
using namespace std;

void test(int &key){
    if (key==9)
        return;
    else{
        key += 1;
        test(key);
        }
}

int main(){
    int key = 8;
    test(key);
    cout << key << endl;
    return 0;
}