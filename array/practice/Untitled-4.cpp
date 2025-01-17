//Equilibrium index of an array
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int > a){
    int p=0,r=0,l=0;
    for(int i=1;i<a.size();++i){
        r+=a[i];
    }
    while(l!=r && p<a.size()-1){
        p++;
        l+=a[p-1];
        r-=a[p];
    }
    return (r==l)?p+1:-1;
}
int main(){
    vector<int> a = {1, 7, 3, 6, 5, 6};
    cout<<fun(a);
}