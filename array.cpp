// #include <iostream>
// using namespace std;


// int main() {
//     int marks[5] = {99, 100, 54, 36, 88};
//     marks[0] = 101;
// cout << marks[0] << endl;
// cout << marks[1] << endl;
// cout << marks[2] << endl;
// cout << marks[3] << endl;
// cout << marks[4] << endl;
// return 0;

// }

// // smallest/largest in array

// #include <iostream>
// #include <climits>

// using namespace std;


// int main(){
// int nums[] = {5, 15, 22, 1, -15, -24};
// int size = 6;

// int smallest = INT_MAX;
// int largest = INT_MIN;

// for(int i = 0; i < size; i++){
// smallest = min(nums[i],smallest);
// largest = max(nums[i],largest);
// }

// cout << " smallest = " << smallest << endl;
// cout << " largest = " << largest << endl;
// return 0;

// }


// pass by reference 
//  #include<iostream>
//  using namespace std;



//  void ChangeArr(int arr[], int size){
//     cout << "in function\n";
//     for(int i = 0; i < size; i++){
//     arr[i] = arr[i] * 2;

//     }
//  }

//  int main(){
//     int arr[] = {1, 2, 3};
//     ChangeArr(arr,3);
//     cout << "in main\n";
//     for(int i = 0; i < 3; i++){
//     cout << arr[i] << " ";
//  }
//  cout << endl;
//  return 0;
// }


// Linear search

// #include<iostream>
// using namespace std;

// int LinearSearch(int arr[], int size, int target
// ){
//    for(int i = 0; i < size; i++){
//       if(arr[i] == target){
//          return i;
//       }
//    }
// return -1;
// }

// int main(){
//    int arr[] = {4, 2, 7, 8, 1, 2, 5};
//    int size = 7;
//    int target = 5;

//    cout << LinearSearch(arr, size, target) << endl;
//    return 0;
// }


//ReverseArray

#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size){
   int start = 0, end = size-1;

   while(start <=end){
      swap(arr[start], arr[end]);
      start++;
      end--;

   }
}

int main(){
   int arr[] = {1,2,3,4,5,6};
   int size = 6;


   ReverseArray(arr, size);

   for(int i =0; i < size; i++){
      cout << arr[i] << " ";

   }
   cout << endl;
   return 0;
}