#include<iostream>
#include<string>
using namespace std;


string removeoccurance(string s, string part){
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}


int main(){
    string s;
    string part;
    cout << "Enter String  : " << endl;
   getline(cin, s);
    cout  <<" Enter  Substring : " << endl;
   getline(cin, part);

string result = removeoccurance(s, part);
cout <<  "New String : " << result << endl;
return 0;
}