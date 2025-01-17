//Find duplicates in O(n) time and O(1) extra space | elements range 1-n;
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    for(int i=0;i<v.size();i++){
        if(v[abs(v[i])]>0){
            v[abs(v[i])]=-v[abs(v[i])];
        }   
        else{
            cout<<abs(v[i])<<endl;
        }
    }
}
int main(){
    vector<int> a={1, 2, 3, 1, 3, 6, 6};
    fun(a);
}