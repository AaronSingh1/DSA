#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left,*right;
};
node* creatnode(int val){
    node *temp=new node();
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp; 
}
void inorder(node *q){
    if(q == NULL){
        return;
    }
    inorder(q->left);
    cout<<q->data<<endl;
    inorder(q->right);
}
void perorder(node *q){
    if(q==NULL){
        return;
    }
    cout<<q->data<<endl;
    perorder(q->left);
    perorder(q->right);
}
void postorder(node *q){
    if(q==NULL){
        return;
    }
    postorder(q->left);
    postorder(q->right);
    cout<<q->data<<endl;
}
int main(){
    node *q=creatnode(1);
    q->left=creatnode(2);
    q->right=creatnode(3);
    q->left->left=creatnode(4);
    q->left->right=creatnode(5);
    inorder(q);
    cout<<endl;
    postorder(q);
    cout<<endl;
    perorder(q);
    cout<<endl;
}