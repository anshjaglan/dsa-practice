#include<iostream>
#include<queue>
#include<vector>
#include<map>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void topView(Node* root){
    queue<pair<Node*, int>> q;
    map<int, int> m;

    q.push({root, 0});

    while(q.size() > 0){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD] = curr->data;
        }

        if(curr->left != NULL){
            q.push({curr->left, currHD-1});
        }
        if(curr->right != NULL){
            q.push({curr->right, currHD+1});
        }

    }
    for(auto it : m){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    Node* root = new Node(1); // FIX 2: Properly instantiate root
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    topView(root);

    return 0;
}