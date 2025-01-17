//anagram
#include<bits/stdc++.h>
using namespace std;
bool fun(string s,string t){ 
    int a[26]={0},b[26]={0},st=0,en=s.length()-1;
    if(s.length()!=t.length()){
        return false;
    }
    while(st<=en){
        a[s[st]-'a']++;
        b[t[st]-'a']++;
        st++;
    }
    int i=0;
    while(i<26){
        if(a[i]!=b[i]){
            return false; 
        }
        i++;
    }
    return true;
}
int main(){
    string s="ac",t="bb";
    cout<<fun(s,t);
}