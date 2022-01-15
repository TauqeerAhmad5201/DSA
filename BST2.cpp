// Finding height of BST
#include<iostream>
using namespace std;
struct BSTNode {
    int data;
    BSTNode *left; 
    BSTNode *right;
};
int FindHeight(struct Node *root){
    if(root==NULL){
        return -1; 
    }
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}
int main(){
    BSTNode *root = NULL;
    FindHeight()
    return 0; 
}