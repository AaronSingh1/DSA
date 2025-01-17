//"manacher's algo"Longest Palindromic Substring""
#include<bits/stdc++.h>
using namespace std;
int fun(string s){
   string t;
   for(auto c:s){
        t+='#'+string(1,c);
   }
   t+='#';
   int r=0,c=0,n=t.length(),ans=0;
   vector<int> p(n,0);
   for(int i=0;i<n;i++){
        int m=2*c-i;
        if(i<r){
            p[i]=min(p[m],r-i);
        }
        while(i + p[i] + 1 < n && i - p[i] - 1 >= 0 && t[i-p[i]-1]==t[i+1+p[i]] ){
            p[i]++;
        }
        if(p[i]+i>r){
           c=i;
           r=p[i]+i; 
        }
        ans += (p[i] + 1) / 2;
   }
   return ans;
}
int main(){
    string my_list = "aaa";
    cout<<fun(my_list);
}