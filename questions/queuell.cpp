#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node *next;
};
struct queue{
    node *front,*rear;
};
node* createnode(int val){
    node *q=(node*)malloc(sizeof(node));
    q->data=val;
    q->next=NULL;
    return q;
}
queue* createqueue(){
    queue* q=(queue*)malloc(sizeof(queue));
    q->rear=q->front=NULL;
    return q;
}
void enqueue(queue *q,int val){
    node* temp = createnode(val);
    if(q->rear==NULL){
        q->front=q->rear=temp;
        return;
    }
    q->rear->next=temp;
    q->rear=temp;
}
void dequeue(queue *q){
    if(q->front==NULL){
        printf("underflow\n");
        return;
    }
    node* temp=q->front;
    q->front=q->front->next;
    if(q->front==NULL){
        q->rear=NULL;
    }
    free(temp);
}
int main(){
    queue *q=createqueue();
    enqueue(q,10);
    enqueue(q, 20);
    dequeue(q);
    dequeue(q);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    dequeue(q);
    printf("Queue Front : %d \n", q->front->data);
    printf("Queue Rear : %d \n", q->rear->data);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    return 0;
}