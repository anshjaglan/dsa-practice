#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,2,3,4};
    int sum = 0;
    int n = sizeof(nums);

for(int i = 0; i < n; i++){
    sum = sum + nums[i];
    cout << sum << endl;
}
return 0;
}