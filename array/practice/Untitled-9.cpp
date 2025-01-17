//average using recursion
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v,int i){
    if(i==v.size()-1){
        return v[i];
    }
    if(i==0){
        return (v[i]+fun(v,i+1))/v.size(); 
    }
    return (v[i]+fun(v,i+1));
}
int main(){
    vector<int> a={1,2,3,4,5};
    cout<<fun(a,0);
}