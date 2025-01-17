//Given an array of pairs, find all symmetric pairs in it
#include<bits/stdc++.h>
using namespace std;
void fun(int a[][2],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;++i){
        int f=a[i][0];
        int s=a[i][1];
        if(m.find(s)!=m.end() && m[s]==f){
            cout<<"{"<<s<<" "<<f<<"}"<<endl;
        }
        else{
            m[f]=s;
        }
    }
}
int main(){
    int a[5][2] = {{11, 20}, {30, 40}, {5, 10}, {40, 30}, {10, 5}};
    int n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
}