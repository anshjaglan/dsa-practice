#include<iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int currSize, capacity;
    int f, r;
  
    public:
    CircularQueue(int size){

        currSize = 0;
        capacity = size;
        arr = new int[capacity];
        f = 0; 
        r = -1;
    }

    void push(int data) {
        if(currSize >= capacity){
            cout << "Cq is full" << endl;
            return;
        }
        r = (r+1)%capacity;
        arr[r] = data;
        currSize++;
    }
    void pop(){
        if(currSize == 0){
            cout << " Empty " << endl; 
            return;
        }
        f = (f+1)%capacity;
        currSize--;
    }
    int front(){
        if(empty()){
            cout <<" queue is empty" << endl;
            return -1;
        }
        return arr[f];

    }
    bool empty(){
        return currSize == 0;

        }
    
    
    void printArr(){
        int index = f;
        for(int i = 0; i < capacity; i++){
            cout << arr[index] << " ";
            index = (index+1) % capacity;
            }
        cout << endl;
    }
};


int main(){
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    
    cq.pop();
    cq.printArr();

    while(!cq.empty()){
        cout << cq.front() << endl;
        cq.pop();
    }
    return 0;
}
