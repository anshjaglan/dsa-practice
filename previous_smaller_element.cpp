// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// vector<int> previouselement(vector<int> arr){
//     vector<int> ans(arr.size(), 0);
//     stack<int> st;
//     int n = arr.size();

//     for(int i = 0; i < n; i++){
//         while(st.size() > 0 && st.top() >= arr[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             ans[i] = -1;
//         } else{
//             ans[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {3,4,1,0,8,5};
//     vector <int> ans = previouselement(arr);
//     for(int val : ans){
//         cout << val <<  " ";
//     }
//     cout << endl;
//     return 0;
    
// }


















#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> pvd(vector<int> arr){
    vector<int> ans(arr.size(), 0);
    stack<int> st;

    for(int i = 0; i < arr.size(); i++){
        while(st.size() > 0 && st.top() >= arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        } else{
            ans[i] = st.top();
        }
        st.push(arr[i]);

    }
    return ans;
}

int main(){
    vector<int> arr = {4,8,1,6,5,2};
    vector<int> ans = pvd(arr);

    for(int val : arr){
        cout << val << " ";
    }
    cout <<endl;
    return 0;
}