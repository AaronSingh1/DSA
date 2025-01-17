//Longest subarray with sum divisible by K
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    int k=3,len=0,sum=0,n=v.size();
    int mod[n];
    unordered_map<int,int> um;
    for(int i=0;i<n;++i){
        sum+=v[i];
        mod[i]=((sum % k)+k)%k;
        if(mod[i]==0){
            len=i+1;
        }
        else if(um.find(mod[i])==um.end()){
            um[mod[i]]=i;
        }
        else if(len=max(len,i-um[mod[i]])){
            len=i-um[mod[i]];
        }
    }
    return len;
}
int main(){
    vector<int>v={1,2,3,4};
    cout<<fun(v);
}