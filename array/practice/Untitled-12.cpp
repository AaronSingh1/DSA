//Replace each element of Array with it’s corresponding rank
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    map<int,int> m;
    int n=v.size(),i;
    for(i=0;i<n;++i){
        m[v[i]]=-1;
    }
    map<int,int> ::iterator it;
    i=1;
    for(it=m.begin();it!=m.end();it++){
        it->second=i;
        i++;
    }
    for(i=0;i<n;++i){
        cout<<m[v[i]]<<" ";
    }
}
int main(){
    vector<int> a={100, 5, 70, 2};
    fun(a);
}