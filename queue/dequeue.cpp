#include<bits/stdc++.h>
using namespace std;
class dequeue{
    int arr[100];
    int front;
    int rear;
    int size;
    public:
        dequeue(int size){
            front=-1;
            rear=0;
            this->size=size;
        }
        void insertfront(int key);
        void insertrear(int key);
        void deletefront();
        void deleterear();
        bool isFull();
        bool isEmpty();
        int getRear(){
            if (isEmpty() || rear < 0) {
                cout << " Underflow\n" << endl;
                return -1;
            }
            return arr[rear];
        }
        int getFront(){
            if (isEmpty()) {
                cout << " Underflow\n" << endl;
                return -1;
            }
            return arr[front];
        }
};
bool dequeue::isEmpty(){
    return (front == -1);
}
bool dequeue::isFull(){
    return (front == rear+1 || front == 0 && rear == size-1);
}
void dequeue::insertfront(int key){
    if(isFull()){
        cout<<"overflow"<<endl;
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else if(front==0){
        front=size-1;
    }
    else{
        front=front-1;
    }
    arr[front]=key;
}
void dequeue::insertrear(int key){
    if(isFull()){
        cout<<"overflow"<<endl;
        return;
    }
    if(rear==size-1){
        rear=0;
    }
    else if(front==-1){
        rear=0;
        front=0;
    }
    else{
        rear=rear+1;
    }
    arr[rear]=key;
}
void dequeue::deletefront(){
    if(isEmpty()){
        cout<<"underflow"<<endl;
        return ;
    }
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front=front-1;
    }
}
void dequeue::deleterear(){
    if(isEmpty()){
        cout<<"underflow"<<endl;
        return;
    }
    if(rear==front){
        rear=-1;
        front=-1;
    }
    else if(rear==0){
        rear=size-1;
    }
    else{
        rear=rear-1;
    }
}
int main(){
    
    dequeue dq(5);
   
      // Function calls
    cout << "Insert element at rear end  : 5 \n";
    dq.insertrear(5);
 
    cout << "insert element at rear end : 10 \n";
    dq.insertrear(10);
 
    cout << "get rear element "
         << " " << dq.getRear() << endl;
 
    dq.deleterear();
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;
 
    cout << "inserting element at front end \n";
    dq.insertfront(15);
 
    cout << "get front element "
         << " " << dq.getFront() << endl;
 
    dq.deletefront();
 
    cout << "After delete front element new "
         << "front become " << dq.getFront() << endl;
}