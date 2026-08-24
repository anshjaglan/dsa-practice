#include<iostream>
#include<vector>

using namespace std;


    int MajorityElement(vector<int>& nums){
    int n = nums.size();
    int val[] = {3,3,3,3,2,2,2,2,2};
    for(int val : nums){
        int freq = 0;
        for( int el :  nums){
            if(el == val){
                freq++;
            }
        }
    }
   
    return val;
}


int main(){
    
    cout << MajorityElement << endl;
    return 0;
}
