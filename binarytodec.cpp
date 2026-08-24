#include<iostream>
using namespace std;

int binTodec(int binNum){
    int ans = 0; 
    int pow = 1;
    while(binNum > 0){
        int rem = binNum%10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    

        
    }
    return ans;
}
int main(){
    
    cout << binTodec(10111) << endl;
    return 0;
}