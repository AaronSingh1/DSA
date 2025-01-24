#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node *next;
};
void insertfront(node **head,int val){
    struct node *temp=(node *)malloc(sizeof(node));
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    temp->next=*head;
    *head=temp;
}
void insertback(node **head,int val){
    struct node *temp=(node *)malloc(sizeof(node));
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    node *t=*head;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=temp;
}
void insertat(node **head,int val,int index){
    struct node *temp=(node *)malloc(sizeof(node));
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    else if(index==0){
        temp->next=(*head);
        *head=temp;
        return;
    }
    node *t=*head;
    int i=1;
    while(index > i && t!=NULL){
        t=t->next;
        i++;
    }
    if(t==NULL){
        printf("not found\n");
        return;
    }
    temp->next=t->next;
    t->next=temp;
}
void delfront(node **head){
    node *temp=(*head);
    (*head)=(*head)->next;
    free(temp);
}
void delback(node** head){
    node* temp=(*head);
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* t=temp->next;
    temp->next=NULL;
    free(t);
}
void delat(node** head,int index){
    node* temp=*head;
    int i=1;
    if(index==0){
        node* t=*head;
        (*head)=(*head)->next;
        free(t);
        return;
    }
    while(i<index && temp!=NULL){
        temp=temp->next;
        i++;
    }
    if(temp==NULL){
        printf("not found\n");
        return;
    }
    node* t=temp->next;
    temp->next=temp->next->next;
    free(t);
}
void show(node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}
void rev(node **head){
    node *nxt,*curr,*pre;
    nxt=(*head);
    curr=pre=NULL;
    while(nxt!=NULL){
        curr=nxt;
        nxt=nxt->next;
        curr->next=pre;
        pre=curr;
    }
    (*head)=curr;
}
int main(){
    struct node *head=NULL;
    insertfront(&head,1);
    insertfront(&head,2);
    insertfront(&head,3);
    insertback(&head,10);
    insertback(&head,20);
    insertback(&head,30);
    insertat(&head,100,1);
    show(head);
    printf("\n");
    delfront(&head);
    delback(&head);
    delat(&head,3);
    show(head);
    rev(&head);
    printf("\n\n");
    show(head);
}