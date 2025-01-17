//counting-frequencies-of-array-elements
#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n){
    sort(a,a+n);
    for(int i=0;i<n;++i){
        int f=lower_bound(a,a+n,a[i])-a;
        int l=upper_bound(a,a+n,a[i])-a-1;//-1 for out of bound
        cout<<a[i]<<" "<<l-f+1<<endl;
        i=l;
    }
}
int main(){
    int a[] = {10, 20, 20, 10, 10, 20, 5, 20,30};//5,10,10,10,20,20,20,20,30
    int n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
}