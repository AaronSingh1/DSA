//Maximum Product Subarray       
#include <bits/stdc++.h> 
using namespace std; 
int fun(vector<int> v){
    long long a=v[0],b=v[0],sf=v[0],n=v.size(),temp;
    for(int i=1;i<n;++i){
        temp=max({v[i]* 1LL,a*v[i],b*v[i]});
        b=min({v[i]* 1LL,a*v[i],b*v[i]});
        a=temp;
        sf=max(a,sf);
    }
    return sf;
} 
int main(){ 
	vector<int> v{1, -2};
	cout<<fun(v);
} 