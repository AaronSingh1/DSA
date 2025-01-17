//Find whether an array is subset of another array
#include<bits/stdc++.h>
using namespace std;
void fun(vector<int > a,vector<int > a1){
    set<int> s(a.begin(),a.end());
    for(int i=0;i<a1.size();++i){
        if(s.find(a1[i])==s.end()){
            cout<<"false";
            return ;
        }
    }
    cout<<"true";
}
int main(){
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> a1 = {1, 2, 3,10};
    fun(a,a1);
}