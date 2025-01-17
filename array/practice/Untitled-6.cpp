//Find second largest element in an array
#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n){
    int f=-1,s=-1;
    for(int i=0;i<n;++i){
        if(a[i]>f){
            s=f;
            f=a[i];
        }
        else if(a[i]>s && a[i]!=f){
            s=a[i];
        }
    }
    cout<<s;
}
int main(){
    int a[] = {10,10,10};
    int n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
}