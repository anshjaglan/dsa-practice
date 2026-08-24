#include<iostream>
using namespace std;

int main(){
 int nums[] ={1,2,3};
 int cncn = 0;
 int cncnc = 0;
 int n = sizeof(nums[0]); 
 
 for(int i = 1; i < n; i++){
    cncn = nums[i];
    cncnc = nums[i];

    int cncn = cncn[nums] + cncnc[nums];

    cout << cncn << endl;
 }
 
 return 0;
}


