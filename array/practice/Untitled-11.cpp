//House Robber – Maximum possible stolen value
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    int n=v.size();
    if(n==0){
        return 0;
    }
    if(n==1){
        return v[0];
    }
    int res=0,last=v[0],slast=0;
    for(int i=1;i<n;++i){
        res=max(v[i]+slast,last);
        slast=last;
        last=res;
    }
    cout<<res;
}
int main(){
    vector<int> a={6, 7, 1, 3, 8, 2, 4};
    fun(a);
}