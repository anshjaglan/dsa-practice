#include<iostream>
using namespace std;


//Prime No.
// string isPrime(int n){
//     for(int i = 2; i*i <= n; i++){
//         if(n % i == 0 ){
//             return "Non- Prime";
//         }
//     }
//     return "Prime";

// }

/* Digit in a number*/

// int count = 0;
// void printDigits(int n){
//     while(n != 0){
//         int digit = n % 10;
//         count++;
//         cout << digit << endl;
//         n = n/10;

//     }
//     cout << " Total Count = " << count << endl;
// }

// bool isArmstrong(int n ){
//     int copyN = n;
//     int sumOfCubes = 0;

//     while(n != 0){
//         int dig = n % 10;
//         sumOfCubes += (dig * dig * dig);
//         n = n/10;

//     }
//     return sumOfCubes == copyN;
// }


// int gcd(int a, int b){
//     while(a>0 && b > 0 ){
//         if(a >  b){
//             a = a % b;
//         }else{
//             b = b % a;
//         }
//     }
//     if(a == 0) return b;
//     return 0;
// }

int gcdRec(int a, int b){
    if(b == 0 ) return a;
    return  gcdRec (b, a%b);
}
int main(){
 cout << gcdRec(12,22 ) << endl;
    return 0;
}

