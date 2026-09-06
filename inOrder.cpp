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

static int index = -1;

Node* buildTree(vector<int>& preOrder){
    index++;
    if(index >= preOrder.size()) return NULL;
    if(preOrder[index] == -1) return NULL;

    Node* root = new Node(preOrder[index]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    vector<int> preOrder = { 1, 2, 4, -1, 5, -1, -1, -1, 3, 6, -1 , 7, -1};
    Node* root = buildTree(preOrder);

    inorder(root);
    return 0;
}