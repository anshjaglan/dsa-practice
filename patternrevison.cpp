#include<iostream>
using namespace std;


/*int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout <<"*" ;
        }
        cout << endl;
    }
    return 0;
} */

/*int main(){
   
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout <<" ";
        }
        for(int j = i; j < n; j++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i); j++){
            cout <<" ";
        }
        for(int j = (n-i); j <= n; j++){
            cout << i ;
        }
        for(int j = n; j < n+i; j++){
            cout <<i;
        }
        cout << endl;
    }
    return 0;

}*/
int main(){
    int n = 6;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i-1); j++){
            cout <<" ";

        }
        cout <<"*";
        if(i != 0){
            for(int j = 0; j < 2*i-1; j++){
                cout <<" ";
            }
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}