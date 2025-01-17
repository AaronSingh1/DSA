//Replace each element of Array with it’s corresponding rank
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    unordered_map<int,int> um;
    int n=v.size(),i;
    for(i=0;i<n;++i){
        um[v[i]]++;
    }
    map<int,int> m;
    map<int,int>::reverse_iterator it;
    unordered_map<int,int>::iterator itr;
    for(itr=um.begin();itr!=um.end();itr++){
        m[itr->second]=itr->first;
    }
    for(it = m.rbegin(); it != m.rend(); ++it){
        int x=it->first;
        while(x>0){
            cout<<it->second<<" ";
            x--;
        }
    }
}
int main(){
    vector<int> a={2, 5, 2, 8, 5, 6, 8, 8};
    fun(a);
}