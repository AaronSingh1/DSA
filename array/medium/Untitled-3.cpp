//Best Time to Buy and Sell Stock
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    vector<int >t=v;
    int n=v.size(),ma=0,mi=v[0];
    for(int i=1;i<n;++i){
        mi=min(v[i],mi);
        ma=max(ma,v[i]-mi);
    }
    return ma;
}
int main(){
    vector<int> v{3,1,7,4,6};
    cout<<fun(v);
}