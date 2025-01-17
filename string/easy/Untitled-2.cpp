//Valid Palindrome
#include<bits/stdc++.h>
using namespace std;
bool fun(string s){ 
    int st=0,en=s.length()-1;
    while(st<en){
        while(st<en && !isalnum(s[st]))st++;
        while(en>st && !isalnum(s[en]))en--;
        if(st<en && tolower(s[st])!=tolower(s[en]))return false;
        st++;
        en--;
    }
    return true;  
}
int main(){
    string s="a??121a";
    cout<<fun(s);
}