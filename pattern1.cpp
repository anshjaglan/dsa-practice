#include <iostream>
using namespace std;


// // int main(){
// //     int n = 5;

// // for(int i = 0; i <= n; i++){
// //     for(int j = 1; j<=i; j++){
// //         cout << "*";
// //     }
// //     cout << endl;
// // }
// // return 0;
// // }

// // int main(){
// //     int n = 5;
// //     for(int i = 5; i > 0; i--){
// //         for(int j = 0; j<i; j++){
// //             cout <<"*";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }


// // int main(){
// //     int n = 5;
// //     for(int i = 1; i <= n; i++){
// //         for(int j = 0; j<n-i; j++){
// //             cout << " ";
// //         }
// //         for(int j = 1; j<=i; j++){
// //             cout <<"* ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// // int main(){
// //     int n = 5;
// //     for(int i = 1; i<=n; i++){
// //         for(int j = 0; j < n-i; j++){
// //             cout <<" ";

// //         }
// //         for(int j = 1; j <= i; j++){
// //             cout << "* ";

// //         } 
// //         cout << endl;

// //     }
// //     return 0;
// // }

// // int main(){
// //     int n = 5;
// //     for(int i = 5; i > 0; i--){
// //         for(int j = 0; j < n-i; j++){
// // cout << " ";
// //         }
// //         for(int j = 1; j <= i; j++){
// //             cout << "* ";
// //         }
// //         cout << endl;

// //     }
// //     return 0;
// // }


// // int main(){
// //     for(int i = 1; i <= 4; i++){
// //         cout << i;
// //         cout << \n;
// //         i++;
// //     }
// //     return 0;
// // }



// int main() {
//     char ch ='A';
//     for(int i = 1; i <=4; i++){
//         for(int j = 1; j<=4; j++){
//             cout << ch <<" ";
//             ch++;

//         }
//         cout << endl;

//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout <<" enter n" <<endl;
// cin >> n;

// for(int i = n; i >= 1; i--){
//     for(int j = n; j >= 1; j--){
//         for(int k = 1; k <=i; k++){
       
//         cout << j <<" ";
//         }
        
//     }
//     cout << endl;

// }
// return 0;
// }

//pyramid
// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int j = 1; j <= i+1; j++){
//             cout << j ;
//         }
//         for(int j = i; j >= 1; j--){
//             cout << j;
//         }
//         cout <<endl;
//     }
//     return 0;


// inverted pyramid



// }
// int main(){
//     int n = 3;
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout <<"*";
//         }
//         for(int j = n-i-1; j>=0; j--){
//             cout <<"*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


int main(){
   int n = 5;
   for(int i = 1; i <= n; i++){
    for(int j = 1; j<= n-i; j++){
        cout << " ";
    }
    for(int j = 1; j <= 2*i-1; j++){
        cout <<"*";
    }
    cout << endl;
   }
    for(int i = n-1; i >= 1; i--){
    for(int j = 1; j<= n-i; j++){
        cout << " ";
    }
    for(int j = 1; j <= 2*i-1; j++){
        cout <<"*";
    }
    cout << endl;
   }


    return 0;
}