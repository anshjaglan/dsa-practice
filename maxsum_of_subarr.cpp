#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};

    int MAX_SUM = INT_MIN;
    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            MAX_SUM = max(MAX_SUM, currSum);
        }
    }
    cout <<"Max Of Subarray: " << MAX_SUM << endl;
    return 0;
}