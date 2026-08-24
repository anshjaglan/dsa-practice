#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int m;
    int r = 0;

cout <<"Enter value of data bits" << endl;
cin >> r;

while(pow(2,m) <  m+r+1){
    m++;
    cout <<"Value of m" << m << endl;
} 
return 0;
}


