#include<iostream>
using namespace std;


bool isPrime(int n){
    if(n <= 1)
    return false;

        if(int i = 2){
            while(i*i <= n){
                if(n%i == 0)
                return false;
            i++;
            }
            return true;
        }

}
int main(){
    cout << isPrime(9) << endl;
    return 0;
}