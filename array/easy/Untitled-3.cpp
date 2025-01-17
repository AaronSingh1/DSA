//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include<bits/stdc++.h>
using namespace std;
int check(vector<int> v){
    unordered_set<int> s;
    for(int i=0;i<v.size();++i){
        s.insert(v[i]);
    }
    if(s.size()!=v.size()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    vector<int> v{1,2,3,4};
    check(v);
}