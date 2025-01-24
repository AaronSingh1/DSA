#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node *left,*right;
};
node *cnode(int data){
    node *t=(node*)malloc(sizeof(node));
    t->data=data;
    t->left=t->right=NULL;
}
void inorder(node* head){
    if(head==NULL){
        return;
    }
    inorder(head->left);
    printf("%d\n",head->data);
    inorder(head->right);
}
void preorder(node* head){
    if(head==NULL){
        return;
    }
    printf("%d\n",head->data);
    preorder(head->left);
    preorder(head->right);
}
void postorder(node* head){
    if(head==NULL){
        return;
    }
    postorder(head->left);
    postorder(head->right);
    printf("%d\n",head->data);
}
int main(){
    node *head=cnode(1);
    head->left=cnode(2);
    head->right=cnode(3);
    head->left->left=cnode(4);
    head->left->right=cnode(5);
    inorder(head);
    printf("\n");
    preorder(head);
    printf("\n");
    postorder(head);
}