//"manacher's algo"Longest Palindromic Substring""
#include<bits/stdc++.h>
using namespace std;
string fun(string s){
    string t;
    for(char c:s){
        t+='#'+string(1,c);
    }
    t+='#';
    int c=0,r=0,n=t.length();
    vector<int> p(n,0);
    for(int i=0;i<t.length();++i){
        int m=2*c-i;
        if(r>i){
            p[i]=min(p[m],r-i);
        }
        while(t[i+1+p[i]]==t[i-1-p[i]]  && i + p[i] + 1 < n && i - p[i] - 1 >= 0){
            p[i]++;
        }
        if(i+p[i]>r){
            c=i;
            r=i+p[i];
        }
    }
    
    int maxLen = 0, maxCenter = 0;
    for (int i = 1; i < n - 1; i++) {
        if (p[i] > maxLen) {
            maxLen = p[i];
            maxCenter = i;
        }
    }
    int start = (maxCenter - maxLen) / 2;
    return s.substr(start, maxLen);
}
int main(){
    string my_list = "babad";
    cout<<fun(my_list);
}