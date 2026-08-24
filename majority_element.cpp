#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   vector<int> nums = {1,4,6,9,20,22,32,12,392,323,23};
    sort(nums.begin(), nums.end());

    int freq = 1; 
    int ans = nums[0];

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        ans = nums[i];

    }
    if(freq > (nums.size())/2){
       cout << " Majority Element : " << ans;
    }
    cout << ans << endl;
    return 0;
}