//Container With Most Water
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
   int s=0,e=v.size()-1,d=v.size()-1,mw=0,w=0;
    if(v.size()==1){
        return 0;
   }
   for(int i=0;i<=e;++i){
        if(v[i]>v[e]){  
            w=v[e]*d;
            e--;
            i--;
        }
        else{
            w=v[i]*d;
        } 
        mw=max(mw,w);
        d--;
   }
   return mw;

}
int main(){
    vector<int> v{1,2,3,4,5,25,24,3,4};
    cout<<fun(v);
}