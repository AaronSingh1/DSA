#include<stdio.h>
struct pqueue{
    int val;
    int priority;
};
int size=-1;
pqueue arr[10];
void enqueue(int val,int prio){
    size++;
    arr[size].val=val;
    arr[size].priority=prio;
}
int peek(){
    int ind=-1;
    int highestpriority=-1;
    for(int i=0;i<=size;i++){
        if(highestpriority == arr[i].priority && ind > -1 && arr[i].val > arr[ind].val){
            highestpriority=arr[i].priority;
            ind=i;
        }
        else if(highestpriority < arr[i].priority){
            highestpriority=arr[i].priority;
            ind=i;
        }
    }
    return ind;
}
void dequeue(){
    int ind=peek();
    for(int i=ind;i<size;++i){
        arr[i]=arr[i+1];
    }
    size--;   
}
int main(){
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);
 
    // Stores the top element
    // at the moment
    int ind = peek();
 
    printf("%d\n",arr[ind].val);
 
    // Dequeue the top element
    dequeue();
 
    // Check the top element
    ind = peek();
    printf("%d\n",arr[ind].val);
 
    // Dequeue the top element
    dequeue();
 
    // Check the top element
    ind = peek();
    printf("%d\n",arr[ind].val);
 
    return 0;
}