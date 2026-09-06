#include<iostream>
#include<vector>
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

static int idx = -1;

Node* buildTree(vector<int>& preOrder){
    idx++;
    if(idx >= preOrder.size()) return NULL;

    if(preOrder[idx] == -1){
        return NULL;
    }
        Node* root = new Node(preOrder[idx]);
        root->left = buildTree(preOrder);
        root->right = buildTree(preOrder);
        return root;
    
}

void preorder(Node* root){
    if(root == NULL){
        return; 
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    vector<int> preOrder = {1,2,4,-1,5,-1,-1,-1,3,6,-1,7,-1};
    Node* root = buildTree(preOrder);
    preorder(root);
    return 0;


}