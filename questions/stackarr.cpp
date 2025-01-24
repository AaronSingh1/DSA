#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
struct stack{
    int top;
    int* arr;
    unsigned capacity;
};
struct stack* createstk(int capacity){
    stack *stk=(stack*)malloc(sizeof(stack));
    stk->arr=(int*)malloc(sizeof(int)*capacity);
    stk->top=-1;
    stk->capacity=capacity;
    return stk;
}
bool isfull(stack *stk){
    return stk->top == stk->capacity-1; 
}
bool isempty(stack *stk){
    return stk->top == -1;
}
void push(stack *stk,int val){
    if(isfull(stk)){
        printf("stack overflow\n");
        return;
    }
    stk->top++;
    stk->arr[stk->top]=val;
}
int pop(stack *stk){
    if(isempty(stk)){
        printf("underflow\n");
        return INT_MIN;
    }
    return stk->arr[stk->top--]; 
}
int main(){
    struct stack *stk=createstk(4);
    push(stk,10);
    push(stk,20);
    push(stk,30);
    push(stk,40);
    push(stk,50);
    push(stk,60);
    printf("%d\n",pop(stk));
    printf("%d\n",pop(stk));
    printf("%d\n",pop(stk));
    printf("%d\n",pop(stk));

    printf("%d\n",pop(stk));
    printf("%d\n",pop(stk));
    push(stk,40);
    push(stk,50);
    printf("%d\n",pop(stk));
    printf("%d\n",pop(stk));
}