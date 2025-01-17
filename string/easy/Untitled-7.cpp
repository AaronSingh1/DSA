//Print all the duplicate characters in a string
#include<bits/stdc++.h>
using namespace std;
string fun(string s,int n){
    unordered_map<char,int> m;
    for(int i=0;i<n;++i){
        m[s[i]]++;
    }
    unordered_map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second>1){
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}
int main(){
    string s="geeksforgeeks";
    int n=s.length();
    cout<<fun(s,n);
    
}