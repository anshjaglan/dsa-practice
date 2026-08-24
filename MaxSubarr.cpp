#include<iostream>
#include<vector>
#include <climits>


using namespace std;


// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};

//     for(int st = 0; st < n; st++){
//         for(int end = st; end <= n-1; end++){
//             for(int i = st; i <= end; i++){
//                 cout << arr[i];
//             }
//             cout << " ";

//         }
//         cout << endl;
//     }
//     return 0;
// }

//  MAxSumarray by bruteforce


// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};

//     int maxSum = INT_MIN;

//     for(int st = 0; st <= n; st++){
//         int currSum = 0;
//         for(int end = st; end < n; end++){
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);

//         }
//     }
//     cout << "max Subarray sum = " << maxSum << endl;

//     return 0;
// }



//  kadens algorithm

int main(){
int n = 5;
int arr[5] = {1,2,3,4,5};

int maxSubArray(vector<int>& nums){
    int currSum = 0; maxSum = INT_MIN;
    for(int val:nums){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    
}
return maxSum;
};
