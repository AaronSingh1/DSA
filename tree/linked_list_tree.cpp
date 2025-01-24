#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
struct btree{
    int data;
    btree *right,*left;
};
btree* tree(int val){
    btree *temp=new btree;
    temp->data=val;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
void lb(node* head,btree * &root){
    queue<btree *> q;
    if(head==NULL){
        root=NULL;
        return;
    }
    root=tree(head->data);
    q.push(root);
    head=head->next;
    while(head){
        btree *parent=q.front();
        q.pop();
        btree *leftchild=NULL,*rightchild=NULL;
        leftchild=tree(head->data);
        q.push(leftchild);
        head=head->next;
        if(head){
            rightchild=tree(head->data);
            q.push(rightchild);
            head=head->next;
        }
        parent->left=leftchild;
        parent->right=rightchild;
    }
}
void push(node **head,int val){
    
    node* temp=new node;
    temp->data=val;
    temp->next=(*head);
    *head=temp;
}
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void inordertraversal(btree *root){
    if(root){
        inordertraversal(root->left);
        cout<<root->data<<" ";
        inordertraversal(root->right);
    }
}
int main(){
    node* head=NULL;
    push(&head, 36);  
    push(&head, 30);
    push(&head, 25);
    push(&head, 15);
    push(&head, 12);
    push(&head, 10); 
    print(head);
    btree *root;
    lb(head,root);
    cout<<endl<<endl;
    inordertraversal(root);
}