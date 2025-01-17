//longest-substring-without-repeating-characters
#include<bits/stdc++.h>
using namespace std;
int fun(string s,int n,int k){
    unordered_map<char,int> m;
    int r=0,st=0,en=0,mf=0;
    for(en=0;en<n;++en){
        m[s[en]]++;
        mf=max(mf,m[s[en]]);
        if(en-st+1-mf>k){
            m[s[st]]--;
            st++;
        }
        r=max(en-st+1,r);
    }
    return r;
}
int main(){
    string s="ABABA";
    int n=s.length(),k=2;
    cout<<fun(s,n,k);
    
}