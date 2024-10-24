#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 6);
    insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 1);
    insertBST(root, 7);
    insertBST(root, 4);

    inOrder(root);
    cout << endl;
    return 0;
}