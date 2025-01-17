//Rotate an array by d positions
#include<bits/stdc++.h>
using namespace std;
void fun(vector<int >& a,int n){
    int d=2;
    d=d%n;
    reverse(a.begin(),a.begin()+d);
    reverse(a.begin()+d,a.end());
    reverse(a.begin(),a.end());
}
int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    int n = a.size();
    fun(a,n);
     for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
}