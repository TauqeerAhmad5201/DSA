#include<iostream>
using namespace std;
struct Node {
    char data;
    Node *left; 
    Node *right; 
}
void Preorder(struct Node *root){
    if(root == NULL) return;
    cout<<"Data : "<<root->data;
    Preorder(root->left);
    Preorder(root->right);

}
void Inorder(struct Node *root){
    if(root == NULL) return;
    Inorder(root->left); 
    cout<<"Data : "<<root->data;
    Inorder(root->right);
}
void Postorder(struct Node *root){
    if(root == NULL) return;
    Postorder(root->left); 
    Postorder(root->right);
    cout<<"Data : "<<root->data;
    
}
int main(){
    
    Preorder();
    Inorder();
    Postorder();
    return 0;
}