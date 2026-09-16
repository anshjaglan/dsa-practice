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

Node* buildTree(vector<int> preorder){
    index++;
    if(preorder[index] == -1){
        return NULL;
    }
    
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

//count 
int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount + rightCount + 1;
}

// sum of nodes

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);

    return leftSum + rightSum + root->data;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,6,7,8,-1,-1,-1,-1,-1};
    Node* root = buildTree(preorder);
    cout <<" count is : " << count(root) << endl;
    cout << "sum is the : " << sumOfNodes(root) << endl;

   return 0;
}