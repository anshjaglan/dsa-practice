#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec = {1,2,3,4,5};
// vector<int> vec(3,10);
//vector<int> vec2(vec1);
vec.erase(vec.begin()+1, vec.begin()+ 3);
vec.insert(vec.begin()+1, 100);
for (int val : vec){
    cout << val  << endl;
}
return 0;
}

