#include<stdio.h>
#include<stdlib.h>
struct pqueue{
    int data;
    int priority;
    pqueue *next;
};
pqueue * createnode(int val,int prio){
    pqueue *p=(pqueue *)malloc(sizeof(pqueue));
    p->data=val;
    p->priority=prio;
    p->next=NULL;
    return p;
}
void enqueue(pqueue** head,int val,int prio){
    pqueue *p=createnode(val,prio);
    if((*head)->priority < p->priority){
        p->next=(*head);
        (*head)=p;
        return;
    }
    else{
        pqueue *temp=(*head);
        while(temp->next != NULL && temp->next->priority > prio){
            temp=temp->next;        
        }
        p->next=temp->next;
        temp->next=p;
    }
}
void dequeue(pqueue **head){
    (*head)=(*head)->next;
}
int peek(pqueue *head){
    return head->data;
}
bool isEmpty(pqueue *head){
    return head==NULL;
}
int main(){
    pqueue *pq=createnode(4,1);
    enqueue(&pq, 5, 2);
    enqueue(&pq, 6, 3);
    enqueue(&pq, 7, 0);
 
    while (!isEmpty(pq)) {
        printf("%d\n",peek(pq));
        dequeue(&pq);
    }
    return 0;
}