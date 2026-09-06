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
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            } else{
                break;
            }
        }
        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);

        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

//height of order

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    int currHt = max(leftHt, rightHt)+1;
   return currHt;
}

// count Nodes
 
int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return (leftCount+rightCount)+1;
}
// sumOFnodes
int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    int totalSum = leftSum + rightSum + (root->data);
    return totalSum;
}

// kth level of a tree
void KthLevel(Node* root, int K){
    if(root == NULL){
        return;
    }
    if(K == 1){
        cout << root->data << " ";
        return;
    }
    KthLevel(root->left, K-1);
    KthLevel(root->right, K-1);
}


int main(){
    vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;
    // cout << root->right->left->data << endl;
    // preorderTraversal(root);
    // cout<< endl;
    // inorderTraversal(root);
    // cout<< endl;
    // postOrder(root);
    // cout << endl;
    // levelOrder(root);
    // cout<< endl;
    // cout << "height : " << height(root) << endl;
    // cout << "count : " << count(root) << endl;
    // cout << " Sum : " << sumOfNodes(root) << endl;
    KthLevel(root, 3);
    
    
    return 0;
}