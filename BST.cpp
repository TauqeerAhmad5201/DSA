#include<iostream>
using namespace std;
struct BSTNode {
    int data;
    BSTNode *left; 
    BSTNode *right;
};
BSTNode *GetNewNode(int data){
    BSTNode *newNode = new BSTNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void Insert(BSTNode *root, int data){
    if(root == NULL){      //empty tree
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
}
bool Search(BSTNode *root, int data){
    if(root == NULL ) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data)
}
int main(){
     BSTNode *root = NULL;
     Insert(root, 15);
     Insert(root, 15);
     Insert(root, 15);
     return 0;
}


