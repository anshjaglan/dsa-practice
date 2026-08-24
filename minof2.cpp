#include<iostream>
#include<climits>
using namespace std;


int main(){
    int nums[] = {2,3,3,4,5,1};
    int size = 6;

    int smallest = INT_MAX;
    for(int i = 0; i <= size; i++){
        smallest = min(smallest, nums[i]);
    }
    cout <<"smallest :: " <<smallest << endl;
    return 0;


}