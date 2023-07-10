#include<iostream>
using namespace std;
struct BSTNode    {
int value;               // element value
struct BSTNode * left;   //To store address of left child
struct BSTNode * right;  //To store address of right child
};
struct BSTNode *InsertNode(struct BSTNode *root,int data){
if(root == NULL){
root = (struct BSTNode*)malloc(sizeof(struct BSTNode));
root->value=data;
root->left=NULL;
root->right=NULL;
}
else{
if(data<root->value){
root->left=InsertNode(root->left,data);
}
else if(data>root->value){
root->right=InsertNode(root->right,data);
}
}
return root;
}
void displayTreeInorder(struct BSTNode *root){
if(root!=NULL){
displayTreeInorder(root->left);
cout<<root->value<<endl;
displayTreeInorder(root->right);
}
}
int main(){
BSTNode *root=NULL;
root=InsertNode(root,15);
root=InsertNode(root,21);
root=InsertNode(root,8);
root=InsertNode(root,25);
root=InsertNode(root,10);
displayTreeInorder(root);
return 0;
}