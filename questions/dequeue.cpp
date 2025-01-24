#include<stdio.h>
#include<stdlib.h>
struct dequeue{
    int arr[100],front,rear,size;
};
dequeue * createdequeue(int val){
    dequeue *q=(dequeue *)malloc(sizeof(dequeue));
    q->front=q->rear=-1;
    q->size=val;
    return q;
}
bool isempty(dequeue *q){
    return q->front==-1;
}
bool isfull(dequeue * q){
    return (q->front==q->rear+1) || (q->front==0 && q->rear==q->size-1);
}
void insertfront(dequeue *q,int val){
    if(isfull(q)){
        printf("overflow\n");
        return;
    }
    if(q->front==-1){
        q->front=q->rear=0;
    }
    else if(q->front==0){
        q->front=q->size-1;
    }
    else{
        q->front--;
    }
    q->arr[q->front]=val;
}
void insertback(dequeue *q,int val){
    if(isfull(q)){
        printf("overflow\n");
        return;
    }
    if(q->rear==q->size-1){
        q->rear=0;
    }
    else if(q->rear==-1){
        q->front=q->rear=0;
    }
    else{
        q->rear++;
    }
    q->arr[q->rear]=val;
}
void delfront(dequeue *q){
    if(isempty(q)){
        printf("underflow\n");
        return;
    }
    printf("%d\n",q->arr[q->front]);
    if(q->front==q->rear){
        q->rear=q->front=-1;
    }
    else if(q->front==q->size-1){
        q->front=0;
    }
    else{
        q->front++;
    }
}
void delback(dequeue *q){
    if(isempty(q)){
        printf("underflow\n");
        return;
    }
    printf("%d\n",q->arr[q->rear]);
    if(q->rear==0){
        q->rear=q->size-1;
    }
    else if(q->rear==q->front){
        q->front=q->rear=-1;
    }
    else{
        q->rear--;
    }
}
int main(){
    dequeue * q=createdequeue(3);
    /*insertfront(q,10);
    insertfront(q,20);
    insertfront(q,30);
    insertfront(q,40);*/
    insertback(q,10);
    insertback(q,20);
    insertback(q,30);
    insertback(q,40);
    delfront(q);
    delfront(q);
    delfront(q);
    delfront(q);
    /*delback(q);
    delback(q);
    delback(q);
    delback(q);*/
}