// #include<iostream>
// using namespace std;

// int main(){
//     char str[13];
//     cout << "Enter char array :" << endl;
//     cin.getline(str, 100, '.');

//     for(char ch : str){
//          cout << ch << " ";
//     }

// // cout << "output :" << str <<  endl;
// cout << endl;
// return 0;
// }



#include<iostream>
#include<string>

using namespace std;

int main(){
    void reverseString(vector<char>& s)
    char str1 = "oppo";
   


    int st = 0, e = str1.size() - 1;
    while  (st < e){
        swap(str1[st++], s.[e--]);

        cout << str1 <<" ";
    }
    cout << endl;
}

