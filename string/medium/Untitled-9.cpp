//Longest Prefix Suffix
#include<bits/stdc++.h>
using namespace std;
int fun(string s){
    int i=0,j=s.length()-1;
    vector<int> v;
    while(j>0){
        if(s[i]==s[j]){
            v.push_back(j);
        }
        j--;
    }
    i=v.size()-1;
    while(i>=0){
        int t2=v[i],t1=0;
        while(s[t1]==s[t2] && t2<s.length()){
            t1++;
            t2++;
        }
        if(t2==s.length()){
            return s.length()-v[i];
        }
        i--;
    }
    return 0;
}

int main() {
    string s1 = "bacddbbabd";
    cout << fun(s1);
}
