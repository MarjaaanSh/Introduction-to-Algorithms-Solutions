#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void swap(int &val1, int &val2){

    int tmp;
    tmp = val2;
    val2 = val1;
    val1 = tmp;
};

class PriorityQueue{
    public:
        int size;
        vector<int> heap;
        PriorityQueue(const vector<int>& vec)
        {
            if(vec.empty()){
                cout<<"The Queue Should not be Empty!"<<endl;
                exit(0);
            }

            size = vec.size();
            heap = vec;
        }

        bool isEmpty();
        void DisplayQueue();
        void remove();
        void insert(int key);
};

bool PriorityQueue::isEmpty(){
    return heap.empty();
}
void PriorityQueue::DisplayQueue(){
    if(isEmpty()){
        cout << "The Queue is Empty!" << endl;
        return;
    }
    for(const auto& element: heap){
        cout << element << " ";
    }
}

void PriorityQueue::remove(){

    if(isEmpty()){
        cout << "No Element Remained!" << endl;
    }
    else {
        heap[0] = heap.back();
        heap.pop_back();
        size = size - 1;

        int parent = 0;
        int child;

        while(true){
            child = 2 * parent + 1;
            if((heap[child] < heap[child+1]) & ((child+1) <= (size-1)))
            {
                child = child + 1;
            }
            if(heap[parent] < heap[child])
            {
                swap(heap[parent], heap[child]);
                parent = child;
            }
            else
            {
                break;
            }
            if(parent==size-1)
            {
                break;
            }
        }
    }
}

void PriorityQueue::insert(int key){
    heap.push_back(key);
    size = size + 1;

    int child = size - 1;
    int parent = floor((child-1)/2);
    while (child!=0)
    {
        if(heap[child] > heap[parent]){
            swap(heap[child], heap[parent]);
            child = parent;
            parent = floor((child-1)/2);
        }
        else {
            break;
        }
    }
}

int main()
{
    vector<int> heap = {10};
    PriorityQueue heap_obj(heap);

    heap_obj.DisplayQueue();
    heap_obj.remove();
    cout << "Removed" << endl;
    //heap_obj.insert(9);
    heap_obj.DisplayQueue();
    return 0;
}

