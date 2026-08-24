#include<iostream>
using namespace std;

int printNums(int n){
    if(n == 1){
        cout << "1\n";
        return 0;
    }
    cout << n << " ";
    printNums(n-1);

}
int main(){
    printNums(4);
    cout << printNums << endl;
    return 0;
}