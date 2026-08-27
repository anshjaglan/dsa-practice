#include<iostream>
#include<vector>
#include<queue>
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
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
       
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
if(root == NULL){
    return;
}
inorderTraversal(root->left);
cout << root->data << " ";
inorderTraversal(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

//level order
void levelOrder(Node* root){
    queue<Node* >q;
    q.push(root);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);

        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;
    // cout << root->right->left->data << endl;
    preorderTraversal(root);
    cout<< endl;
    inorderTraversal(root);
    cout<< endl;
    postOrder(root);
    cout << endl;
    levelOrder(root);
    
    
    
    return 0;
}