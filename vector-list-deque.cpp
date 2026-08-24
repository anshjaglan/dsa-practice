#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    // list<int> l;
     deque<int> d = {1,2,3,4,5};

    // l.push_back(1);
    // l.push_back(2);
    // l.emplace_back(3);
    // l.emplace_front(4);
    // l.pop_back();
    // l.pop_front();

    for(int val : d){
        cout << val << " ";
    }
    cout<<endl;
    return 0;
}