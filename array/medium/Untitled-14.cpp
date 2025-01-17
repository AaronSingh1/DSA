//Arrange given numbers to form the biggest number
#include<bits/stdc++.h>
using namespace std;
bool myCompare(const string& x,const string& y){
    return (x+y)>(y+x);
}
string fun(vector<string> v){
    int n=v.size();
    sort(v.begin(),v.end(),myCompare);
    string result;
    for(int i=0;i<n;++i){
        result+=v[i];
    }

    return result;
}
int main(){
    vector<string>v={"54", "546", "548", "60"};
    cout<<fun(v);
}