#include<stdio.h>
#include<stdlib.h>
struct queue{
    int *arr;
    int capacity,size;
    int front,rear;
};
struct queue * createqueue(int capacity){
    queue *q=(queue*)malloc(sizeof(queue)*capacity);
    q->front=q->size= 0;
    q->capacity=capacity;
    q->rear=capacity-1;
    q->arr=(int*)malloc(sizeof(int)*capacity);
    return q;
}
bool isfull(queue *q){
    return q->size==q->capacity;
}
bool isempty(queue *q){
    return q->size==0;
}
void push(queue *q,int val){
    if(isfull(q)){
        printf("overflow\n");
        return;
    }
    q->rear=(q->rear+1) % q->capacity;
    q->arr[q->rear]=val;
    q->size++;
}   
void pop(queue *q){
    if(isempty(q)){
        printf("underflow\n");
        return;
    }
    printf("%d\n",q->arr[q->front]);
    q->front=(q->front+1) % q->capacity;
    q->size--;
}
int main(){
    queue* q = createqueue(3);
    push(q,10);
    push(q,20);
    push(q,30);
    push(q,100);
    push(q,200);
    push(q,300);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    push(q,10);
    push(q,20);
    push(q,30);
}