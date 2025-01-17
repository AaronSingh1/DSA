//Find Minimum in Rotated Sorted Array       
#include <bits/stdc++.h> 
using namespace std; 
int fun(vector<int> v){
    int r=v.size()-1,m=r/2,l=0;
    while(l<=r){
        m=(l+r)/2;
        //cout<<v[m]<<endl;
        if(v[m]<v[r]){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    return v[m];
} 
int main(){ 
	vector<int> v{4,5,6,7,0,1,2};
	cout<<fun(v);
} 