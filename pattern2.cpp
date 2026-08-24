#include<iostream>
using namespace std;


//1. Simple

// int main(){
//     int n = 4;
//     int nums = 1;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout<<nums <<" ";
//             nums++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//2. Triangle

// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//3. decreasing order triangle

// int main(){
//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         for(int j = i; j > 0; j--){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 4. floyd triangle

// int main(){
//     int n = 4;
//     int nums = 1;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << nums;
//             nums++;

//         }
//         cout << endl;
//     }
//     return 0;
// }

//5. Inverted Triangle
// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout <<" ";
//         }
//         for(int j = 0; j <= n-i; j++){
//             cout << i;
//         }
//         cout<< endl;
//     }
//     return 0;
// }


//6. pyramid
// int main(){
//     int n = 3;
//     int nums = 1;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout <<" ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout << nums;
//             nums++;
//         }
//         for(int j = 1; j <= i-1; j++){
//             cout << nums;
//             nums++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 7.Diamond
// int main(){
//     int n = 3;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout <<" ";
//         }
//         for(int j = 1; j <=2*i-1; j++){
//             cout << "*";

//         }
        
//         cout << endl;
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout <<" ";
//         }
//         for(int j = 1; j <= 2*(n-i)-1; j++){
//             cout <<"*";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }

//8. hallow square

// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <=n; j++ ){
//             if( j == 1 || j == n || i == 1 || i == n){
//                 cout <<i;
//             } else
//                 cout <<" ";
//             }
//         cout << endl;
//     }
//     return 0;
// }

//9. diamond hallow

int main(){
    int n = 3;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout <<" ";
        }
        cout <<"*";
        if(i!=0){
            for(int j = 0; j<2*i-1; j++){
                cout <<" ";
            }
            cout <<"*";
            
        }
        cout << endl;
        
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < i+1; j++){
            cout <<" ";
        }
            cout << "*";
        if(i!=n-2){
            for(int j = 0; j < 2*(n-i) - 5; j++){
                cout <<" ";
            }
            cout <<"*";
        }
        
        cout << endl;
    }
    return 0;
}