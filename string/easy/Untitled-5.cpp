//Longest Common Prefix
#include<bits/stdc++.h>
using namespace std;
string fun(string s[],int n){
    string a;
    sort(s,s+n);
    int i=0;
    int m = min(s[0].length(), s[n-1].length());
    while(s[0][i]==s[n-1][i] && i<m){
        i++;
    }
    for(int j=0;j<i;++j){
        a+=s[0][j];
    }
    return a;
}
int main(){
    string s[]={"geeksforgeeks", "geeks","geek", "geeier"};
    int n=sizeof(s) / sizeof(s[0]);
    cout<<fun(s,n);
    
}