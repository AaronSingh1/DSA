//longest-substring-without-repeating-characters
#include<bits/stdc++.h>
using namespace std;
int fun(string s,int n){
    vector<int> v(256,-1);
    int r=0,st=0,en=0;
    for(en=0;en<n;++en){
        st=max(v[s[en]]+1,st);
        r=max(r,en-st+1);
        v[s[en]]=en;
    }
    return r;
}
int main(){
    string s="geeksforgeeks";
    int n=s.length();
    cout<<fun(s,n);
    
}