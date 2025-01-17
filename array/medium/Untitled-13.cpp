//Find minimum number of merge operations to make an array palindrome
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    int n=v.size()-1,i=0,c=0;
    while(i<n){
        if(v[i]==v[n]){
            i++;
            n--;
        }
        else if(v[i]<v[n]){
            i++;
            v[i]=v[i]+v[i-1];
            c++;
        }
        else{
            n--;
            v[n]=v[n+1]+v[n];
            c++;
        }
    }
    return c;
}
int main(){
    vector<int>v={1, 4, 5, 5};
    cout<<fun(v);
}