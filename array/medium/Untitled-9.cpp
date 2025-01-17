//Find if there is a pair with a given sum in the rotated sorted Array       
#include <bits/stdc++.h> 
using namespace std; 
void fun2(int m,vector<int> v){
    int x=20;
    int i=m-1;
    while(m!=i){
        if(m==v.size()){
            m=0;
        }
        if(i==-1){
            i=v.size()-1;
        }
        if(x==(v[m]+v[i])){
            cout<<x<<"true";
            return;
        }
        else if(x<(v[m]+v[abs(i)])){
            i--;
        }
        else{
            m++;
        }
    }
    if(m==i){
        cout<<"false";
    }
}
int fun(vector<int> v){
    int r=v.size()-1,m=r/2,l=0;
    while(l<=r){
        m=(l+r)/2;
        if(v[m]<v[r]){
            r=m;
        }
        else{
            l=m+1;
        }
    }

    fun2(m,v);
    return 0;
} 
int main(){ 
	vector<int> v{11, 15, 26, 38, 9, 10};
	fun(v);
} 