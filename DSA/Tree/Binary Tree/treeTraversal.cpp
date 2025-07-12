//sample code for inorder preorder and postoder traversal
#include <iostream>
using namespace std;
typedef struct node{
    int val;
    node*left;
    node*right;
    node(int val){
        this->val=val;
    }
}node;
void createtree(node*&root){
    int value;
    cin>>value;
     root=new node(value);
    if(value!=-1){
   
     //Left node 
    cout<<"Left node ";
    createtree(root->left);
   
    cout<<"Right node ";
    createtree(root->right);
    
    }else{
        root->left = nullptr;
        root->right=nullptr;
    }
  
}
void preorder(node*root){
    if (root==nullptr )return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
   
}
void inorder(node*root ){
    if (root==nullptr )return;
     inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}
void postorder(node*root ){
    if (root==nullptr )return;
     postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
int main() {
   node*root=nullptr;
   createtree(root);
  
   preorder(root);
    cout<<endl;
   inorder(root); 
   cout<<endl;
   postorder(root);
    return 0;
}
