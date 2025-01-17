//Longest Prefix Suffix
#include<bits/stdc++.h>
using namespace std;
int fun(string s,string p){
    
    int n=s.length(),m=p.length(),i=n-1,j=m-1,res=0,x=0;
    if(n!=m){
        return -1;
    }
    int arr[256]={0};
    while(x<m){
        arr[p[x]]++;
        x++;
    }
    x=0;
    while(x<n){
        arr[s[x]]--;
        x++;
    }
    x=0;
    while(x<256){
        if(arr[x]!=0){
            return -2;
        }
        x++;
    }
    while(i>=0 && j>=0){
        while(s[i]!=p[j] && i>=0){
            i--;
            res++;
        }
        j--;
        i--;
    }
    return res;
}

int main() {
    string s1 = "EACBD",s2="EABCD";
    cout << fun(s1,s2);
}
