#include <bits/stdc++.h>
using namespace std;
struct Q{
    int data;
    Q* next;
    Q(int x){
        data=x;
        next=NULL;
    }
};
struct Qcreate{
    Q *front,*rear;
    Qcreate(){
        front=rear=NULL;
    }
    void enqueue(int x){
        Q *temp= new Q(x);
        if(rear==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"underflow"<<"\n";
            return;
        }
        cout<<front->data<<endl;
        Q *temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        free(temp);
    }
};
int main(){
    Qcreate q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    
    q.dequeue();
    q.dequeue();
    q.dequeue();       
}