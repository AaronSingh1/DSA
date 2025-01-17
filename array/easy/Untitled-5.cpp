//Chocolate Distribution Problem
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> a){
    int m;
    cin>>m;
    if(m==0||a.size()==0||m>n){
        return -1;
    }
    sort(a.begin(),a.end());
    int dif=INT_MAX;
    for(int i=0;i+m-1<a.size();i++){
        dif=min(dif,a[i+m-1]-a[i]);
    }
    cout<<dif<<endl;
}
int main(){
    vector<int> a{12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };
    fun(a);
}