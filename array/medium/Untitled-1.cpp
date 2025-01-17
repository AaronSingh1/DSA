//Next Permutation
#include<bits/stdc++.h>
using namespace std;
void fun(vector<int> v){
    vector<int>:: iterator it,i;
    it= v.end();
    i=it;
    for(it--;it>v.begin();it--){
        if(*(it)>*(it-1)){
            it--;
            i=it;
            for(i++;i<v.end();++i){
                if(*(it)>=*(i)){
                    swap(*it,*(i-1));
                    sort((it+1),v.end());
                    goto j;
                }
            }
            swap(*it,*(i-1));
            sort(++it,v.end());
            goto j;
        }
        if((it-1)==v.begin()){
            reverse(v.begin(),v.end());
            for(it--;it<v.end();it++){
                cout<<*it<<endl;
            }
            return;
        }
    }
    j:
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int> v{1,5,1};
    fun(v);
}