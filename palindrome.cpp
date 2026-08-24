#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch <='9') ||
(ch >=  'a' && ch <= 'z')){
    return true;
}
return false;
}

bool isPalindrome( string s){
    int st = 0, end = s.length()-1;

    while(st < end){
        if(!isAlphaNum(s[st])){
            st++; continue;

        }
        if(!isAlphaNum(s[end])){
            end--; continue;

        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++, end--;
    }
    return true;
}

int main(){
string input;
cout << " Enter  string: ";
getline(cin, input);

if(isPalindrome(input)){
    cout << "Yes, it is a palindrome" << endl;
} else {
    cout << " No, it is not a palindrome" << endl;
}
return 0;
}