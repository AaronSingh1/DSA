#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left,* right;
        node(int x){
            data=x;
            right=left=NULL;
        }
};
void traverse(node *root){
    if(root!=NULL){
        traverse(root->left);
        cout<<root->data<<endl;
        traverse(root->right);
    }
    else{
        root=new node(-1);
        cout<<root->data<<endl;
    }
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(5);
    root->right->right=new node(4);   
    traverse(root);
}