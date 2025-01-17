//Sort a K-Increasing-Decreasing Array
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>>pi;
void mg(vector<vector<int>> v){
    vector<int> output;
    priority_queue<pi,vector<pi>,greater<pi>> q;
    for(int i=0;i<v.size();i++){
        q.push({v[i][0],{i,0}});
    }
    while(false==q.empty()){
        pi z= q.top();
        q.pop();
        int i=z.second.first;
        int j=z.second.second;
        output.push_back(z.first);
        if(j+1<v[i].size()){
            q.push({v[i][j+1],{i,j+1}});
        }
    }
    for(int i=0;i<output.size();++i){
        cout<<output[i]<<" ";
    }
}
void fun(vector<int> v){
    int n=v.size();
    vector<vector<int>> x;
    typedef enum {inc,dec} rr;
    rr arr=inc;
    int s=0;
    for(int i=0;i<=n;++i){
        if(i==n || (i>0 && arr==inc && v[i-1]>v[i]) || (i>0 && arr==dec && v[i-1]<v[i])){
            if(inc==arr){
                x.emplace_back(v.cbegin()+s,v.cbegin()+i);
            }
            else{
                x.emplace_back(v.crbegin()+n-i,v.crbegin()+n-s);
            }
            s=i;
            arr=((arr==inc) ?dec:inc);
        }
    }
    mg(x);   
}
int main(){
    vector <int> a = {57, 131, 493, 294, 221, 339, 418, 458, 442, 190};
    fun(a);
}