#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node *left,*right;
};
int height(node* );
void currlevel(node* ,int);
node *cnode(int data){
    node *t=(node*)malloc(sizeof(node));
    t->data=data;
    t->left=t->right=NULL;
}
void levelorder(node *head){
    int h=height(head);
    for(int i=1;i<=h;++i){
        currlevel(head,i);
    }
}
void currlevel(node *head,int i){
    if(head==NULL){
        return;
    }
    else if(i==1){
        printf("%d\n",head->data);
    }
    else{
        currlevel(head->left ,i-1);
        currlevel(head->right,i-1);
    }
}
int height(node *head){
    if(head==NULL){
        return 0;
    }
    int lheight=height(head->left);
    int rheight=height(head->right);
    if(lheight > rheight){
        return (lheight+1);
    }
    else{
        return (rheight+1);
    }
}
int main(){
    node *head=cnode(1);
    head->left=cnode(2);
    head->right=cnode(3);
    head->left->left=cnode(4);
    head->left->right=cnode(5);
    printf("height->%d\n",height(head));
    levelorder(head);
}