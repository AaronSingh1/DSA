//Kth Largest Element in an Array
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v,int k){
    priority_queue<int,vector<int>,greater<int>> q;
    int i=0,n=v.size();
    while(i<n){
        q.push(v[i]);
        if(q.size()>k){
            q.pop();
        }
        ++i;
    }
    return q.top();
}
int main(){
    vector<int> v{5,1,6,4};
    int k=2;
    cout<<fun(v,k);
}