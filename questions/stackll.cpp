#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    stack* next;
};
stack* createstack(int val){
    stack* stk=(stack*)malloc(sizeof(stack));
    stk->data=val;
    stk->next=NULL;
    return stk;
}
int isempty(stack *stk){
    return !stk;
}
void push(stack **stk,int val){
    stack *temp=createstack(val);
    if(*stk==NULL){
        *stk=temp;
        return;
    }
    temp->next=*stk;
    *stk=temp;
}
void pop(stack** stk){
    if(isempty(*stk)){
        printf("underflow\n");
        return;
    }
    printf("%d\n",(*stk)->data);
    stack *temp= *stk;
    *stk=(*stk)->next;
    free(temp);
}
int main(){
    stack *stk=NULL;
    pop(&stk);
    pop(&stk);
    push(&stk,10);
    push(&stk,20);
    push(&stk,30);
    push(&stk,40);
    pop(&stk);
    pop(&stk);
    pop(&stk);
    pop(&stk);
    pop(&stk);
    pop(&stk);
}