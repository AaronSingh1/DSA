//valid parenthese
#include<bits/stdc++.h>
using namespace std;
bool fun1(char a,char b){
    if(a=='{' && b=='}')return true;
    if(a=='(' && b==')')return true;
    if(a=='[' && b==']')return true;
    return false;
}
bool fun(string s){
    int top=-1; 
    for(int i=0;i<s.length();++i){
        if(top < 0 || !fun1(s[top],s[i])){
            top++;
            s[top]=s[i];
        }
        else{
            top--;
        }
    }
    if(top==-1){
        return true;
    }
    else{ 
        return false;
    }
}
int main(){
    string s="{()}[]";
    cout<<fun(s);
}