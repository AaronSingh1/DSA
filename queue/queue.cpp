#include <bits/stdc++.h>
using namespace std;
struct Queue{
    int capacity;
    int *array;
    int front,rear,size;
};
struct Queue* createqueue(int val){
    struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity=val;
    queue->size=0;
    queue->front=0;
    queue->rear=val-1;
    queue->array=(int *)malloc(sizeof(int)*(queue->capacity));
    return queue;
}
int isempty(struct Queue* q){
    return q->size==0;
}
int isfull(struct Queue* q){
    return q->size==q->capacity;
}
void enqueue(struct Queue* queue,int val){
    if(isfull(queue)){
        printf("overflow\n");
        return;
    }
    queue->size=queue->size+1;
    queue->rear+=1;
    queue->rear=queue->rear % queue->capacity;
    queue->array[queue->rear]=val;   
}
void dequeue(struct Queue* queue){
    if(isempty(queue)){
        printf("underflow\n");
        return ;
    }
    printf("%d\n",queue->array[queue->front]);
    queue->front=(queue->front+1)%queue->capacity;
    queue->size=queue->size-1;
}
int main(){
    struct Queue* q=createqueue(4);
    enqueue(q,10);
    enqueue(q,40);
    enqueue(q,20);
    enqueue(q,30);

    enqueue(q,50);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    
}