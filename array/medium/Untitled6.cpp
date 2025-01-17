//Product of Array Except Self        
#include <bits/stdc++.h> 
using namespace std; 
vector<int> fun(vector<int> v){
    int n=v.size();
    vector<int> a(n,1);
    int temp=1;
    for(int i=0;i<n;++i){
        a[i]*=temp;
        temp*=v[i];
    }
    temp=1;
    for(int i=n-1;i>=0;--i){
        a[i]*=temp;
        temp*=v[i];
    }
     for(int i=0;i<v.size();++i){
        cout<<a[i]<<endl;
    } 
	return a; 
} 


int main() 
{ 
	vector<int> v{10, 3, 5, 6, 2 };
	fun(v);
} 

