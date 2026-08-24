#include<iostream>
using namespace std;

int nums = 124;
int d;
int main(){
   while(nums>0){
    d = nums % 10;
    cout << d << endl;
    nums = nums / 10;
     if(nums%d == 0){
        cout << d << endl;
     }
     else {
        cout <<" mistake" << endl;
     }
   }
  
return 0;
}