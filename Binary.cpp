#include<iostream>
using namespace std;

int dectoBinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum%2;
        decNum/= 2;
        ans+= rem*pow;
        pow *= 10;

    }
    return ans;
}

int main(){
    int decNum ;
    cout << " Enter decimal no. :" << endl;
    cin >> decNum;
    
     cout << " binary no.`:" << endl;

    for(int i = 0; i <= decNum; i++)
{

    cout << dectoBinary(i) << endl;}
    return 0;
}