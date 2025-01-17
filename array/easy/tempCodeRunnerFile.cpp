//Search an element in a sorted and rotated Array
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v){
    int k,l=0,m,h=v.size()-1;
    cin>>k;
    while(l<=h){
        m=(l+h)/2;
        if(v[m]==k){
            cout<<m;
            return 0;
        }
        if(v[l] < v[m]){
            if(k>=v[l]&&v[m]>k){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        else{
            if(v[m]<k && k>=v[h]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> v{4, 5, 6, 7, 0, 1, 2};
    fun(v);
}