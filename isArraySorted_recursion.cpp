#include<iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int>& arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main(){
    vector<int> arr = {2,3,9,10};
    cout << isSorted(arr, arr.size());
    return 0;
}