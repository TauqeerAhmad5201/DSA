// finding min and max in BST
#include<iostream>
using namespace std;
struct BSTNode {
    int data;
    BSTNode *left; 
    BSTNode *right;
};
int FindMin(BSTNode *root){
   
    if(root==NULL){
        cout<<"Error : Tree is empty : "; 
        return -1;
    }
    while(root->left != NULL){
        root = root->left; 
    }
    return root->data;
}
int FindMax (BSTNode *root){
   
    if(root==NULL){
        cout<<"Error : Tree is empty : "; 
        return -1;
    }
    while(root->right != NULL){
        root = root->right; 
    }
    return root->data;
}
int main(){
   int Min =  FindMin();
   int Max = FindMax();
    return 0;
}