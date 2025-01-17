//Print all combinations 
#include<bits/stdc++.h>
using namespace std;
void fun2(vector<int> v,int data[],int s,int e,int ind,int r){
    if(ind==r){
        for(int j=0;j<r;j++){
            cout<<data[j]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=s; i<=e && e-i+1>=r-ind;++i){
        data[ind]=v[i];
        fun2(v,data,s+1,e,ind+1,r);
    }
}
void fun(vector<int> v,int r,int n){
    int data[r],e=n-1;
    fun2(v,data,0,e,0,r);
}
int main(){
    vector<int>v={1,2,3,4};
    int r=3,n=v.size();
    fun(v,r,n);
}