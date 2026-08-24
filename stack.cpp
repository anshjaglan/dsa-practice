#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>


using namespace std;
int main(){
map<string, int> m;
m["headphphone"] = 20;
m["phone"] = 80;
m["laptop"] = 100;

for(auto p : m){
    cout << p.first << " " << p.second << endl;

}

return 0;
}