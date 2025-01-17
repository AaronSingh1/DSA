//Merge Overlapping Intervals
#include<bits/stdc++.h>
using namespace std;
int fun(vector<vector<int>>& v){
    int n=v.size();
    sort(v.begin(),v.end());
    int x=0;
    for(int i=1;i<n;++i){
        if(v[x][1]>=v[i][0]){
            v[x][1]=max(v[x][1],v[i][1]);
        }
        else{   
            x++;
            v[x]=v[i];
        }
    }
    return x;
}
int main(){
    vector<vector<int>>v={{1,3},{2,6},{9,16},{8,10},{15,18}};
    int newSize=fun(v);
    cout << "The Merged Intervals are: ";
    for (int i = 0; i <= newSize; i++) {
        cout << "[" << v[i][0] << ", " << v[i][1] << "] ";
    }
    cout << endl;
}