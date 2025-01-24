#include<bits/stdc++.h>
using namespace std;
struct Q{
    int val;
    int priority;
};
Q pri[10000];
int size=-1;
void enqueue(int val,int prio){
    size++;
    pri[size].val=val;
    pri[size].priority=prio;
}
int peek(){
    int highest_priority=INT_MIN;
    int ind=-1;
    for(int i=0;i<=size;++i){
        if((highest_priority==pri[i].priority && ind>-1) && (pri[ind].val < pri[i].val)){
            highest_priority=pri[i].priority;
            ind=i;
        }
        else if(highest_priority < pri[i].priority){
            highest_priority=pri[i].priority;
            ind=i;
        }
    }
    return ind; 
}
void dequeue(){
    int  ind = peek();
    for(int i=ind ; i<size ; ++i){
        pri[i]=pri[1+i];
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
 
    cout << pri[ind].val << endl;
 
    // Dequeue the top element
    dequeue();
 
    // Check the top element
    ind = peek();
    cout << pri[ind].val << endl;
 
    // Dequeue the top element
    dequeue();
 
    // Check the top element
    ind = peek();
    cout << pri[ind].val << endl;
}