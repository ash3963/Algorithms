#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorderIterative(Node* root) {
    
    if(!root)
        return;
    
    stack<Node*> stk;
    stk.push(root);

    while(!stk.empty()) {

        Node* node=stk.top();
        cout<<node->data<<" ";
        stk.pop();

        if(node->right)
            stk.push(node->right);
        if(node->left)
            stk.push(node->left);
    }
}

void inorderIterative(Node* root) {
    if(!root)
        return;

    stack<Node*> stk;
    Node* curr=root;

    while(curr || !stk.empty()) {
        while(curr) {
            stk.push(curr);
            curr=curr->left;
        }
        curr=stk.top();
        stk.pop();
        cout<<curr->data<<" ";
        curr=curr->right;    
    }
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    inorderIterative(root);

    return 0;
}



