// #include <iostream>
// using namespace std;
   
// // sum function
// int sum(int a, int b){
//      int s = a+b;
//     return s;
// }


// //minOfTwo

// int minOfTwo(int a, int b){
//     if (a<b){
//         return a;
//     } else {
//         return b;
//     }
// }
// // Sum of n numbers

// int sumN( int n){
//     int sum = 0;

//     for(int i = 0; i <= n; i++){
//         sum+= i;
//     }
//     return sum;
// }

// int factN(int n){
//     int fact = 1;


//     for(int i=1; i<=n; i++){
//         fact*= i;
    
//     }
//     return fact;
// }


// int main() {
//     cout << sum(10,5) << endl;
//     cout << "min = " << minOfTwo(10,9) << endl;
//     cout << "Sum Of n: "<< sumN(10) << endl;
//     cout << " Factorial is : " << factN(5) << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int SumofDig(int num){

//     int digSum = 0;

//     while (num > 0){

//     int  lastdig = num % 10;
//     num = num/10;

//     digSum+= lastdig;
//     }
//     return digSum;
// }

// int main(){
//     cout << "Summ  = " << SumofDig(2356) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int factorial(int n){

// int fact = 1;
// for(int i = 1; i<=n; i++){
//     fact*=i;
// }

//     return fact;
// }

// int nCr(int  n,  int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n/(fact_r * fact_nmr);
// }

// int main(){
//     int n = 6, r = 3;
//     cout << "Factorail is : "<< nCr(n,r) << endl;
//     return 0;
// }



      
   

// #include <iostream>
// using namespace std;

// // 🔹 Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1)
//         return false;

//     int i = 2;
//     while (i * i <= n) {
//         if (n % i == 0)
//             return false;
//         i++;
//     }

//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPrime(num))
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;

//     return 0;
// }



#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    int i =2;
    while(i * i <= n){
        if(n % i == 0){
            return false;
            i++;
        }
        return true;
    }
}


int main(){
    int n;
    cout << " Enter the value of n : " << endl;
    cin >> n;

    cout << " Prime no. is given below" << endl;

   for(int  i = 1; i<=n; i++){
  if(isPrime(i)){
    cout << i << endl;
  }

   }
   cout << endl ;
   return 0;
}