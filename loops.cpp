// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     int n;
//     cout << "Enter n:";
//     cin >> n;

//     for( int i = 1; i<=n; i++)
// {

//     cout << i << " ";
// }

// return 0;

// }

// #include <iostream>
// using namespace std;

// int main(){
// int i = 1;
// int n;
// int sum = 0;

// cout << "Enter n : ";
// cin >> n;

// for( i=1; i<=n; i++ ){
   
//    sum +=i ;
    
    
// }

// cout << "sum " << sum << endl;
// return 0;

// }


// #include <iostream>
// using namespace std;

// int main() {
// int i = 1;
// int n;
// int oddSum = 0;

// cout << "Enter n: \n";
// cin >> n;

// for(int i =1; i<=n; i++){
// if(i%2 != 0) 

// {
//    oddSum += i;
// }


// }
// cout << " OddSum = " << oddSum << endl;
// return 0;

// }



// #include <iostream>
// using namespace std;

// int main(){

//    int i = 2;
//    int n;
//    int oddSum = 0;

//    cout << "Enter n: \n";
//    cin >> n;


//    while(i<=n) {

// oddSum+=i;
// i+=2;
//       }
//       cout << "Odd Sum:" << oddSum <<endl ;
     
   
//    return 0;
//    }




// #include <iostream>
// using namespace std;


// int main() {

// int n ;
// bool isPrime = true;

// cout << "enter n \n";
// cin >> n;

// for(int i = 2; i*i <= n; i++) {
//    if(n%i == 0) {
//       isPrime = false;
//       break;
//    }
// }

// if( isPrime == true) {
//    cout << "prime no\n";
// } else { 
//    cout << "non-prime\n";
// }


// return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

// int i=1;
// int n;
// int sum = 0;

// cout <<"Enter n : \n";
// cin >> n;

// for(int i = 1; i <= n; i++) {
//    if(i%3 == 0){
//         sum+= i;
//         cout << "Sum is :" << sum << endl;
//    } 

// }
// return 0;

// }



#include <iostream>
using namespace std;


int main(){
   int i = 1;
   int n;
   int fact = 1;

   cout << "Enter no." <<endl;
   cin >> n;


   for(int i = 1; i <= n; ++i){
      
         fact *= i;
      
      }

   
   cout << "Factorial is " << fact << endl;

return 0;

}