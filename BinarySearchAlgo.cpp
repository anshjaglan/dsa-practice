#include <iostream>
#include <vector>
using namespace std;


int binarySeach(vector<int> arr, int tar){
    
    int st = 0;
     int end = size.arr() - 1;

    while(st <= end){
        int mid = (st + end)/2;

        if(tar > arr[mid]){
            st = mid + 1;

        }
        if( tar < arr[mid]){
            end =  mid - 1;

        }
        if (tar == arr[mid]){
            return mid;
        }
       

    }
return -1;
}


int main(){
    vector<int> arr = { -1, 0, 3, 4, 5, 9, 12};
    int tar = 12;
 cout << binarySeach(arr, tar) << endl;

    return 0;
}