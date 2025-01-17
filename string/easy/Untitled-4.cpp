//remove consecutive
#include<bits/stdc++.h>
using namespace std;
string fun(string s){
    string a;
    int n=s.length();
    for(int i=0;i<n;++i){
        a+=s[i];
        while(s[i]==s[i+1]){
            i++;
        }
    }
    return a;
}
int main(){
    string s="aaaabb";
    cout<<fun(s);
}