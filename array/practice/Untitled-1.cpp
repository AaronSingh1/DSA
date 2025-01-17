//Find first non-repeating element in a given Array of integers
#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n){
    unordered_map<int ,int> m;
    for(int i=0;i<n;++i){
        m[a[i]]++;
    }
    for(int i=0;i<n;++i){
        if(m[a[i]]==1){
            cout<<a[i];
            return;
        }
    }
}
int main(){
    int a[] = {9, 4, 9, 6, 7, 4};
    int n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
}