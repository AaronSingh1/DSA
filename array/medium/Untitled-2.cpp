//repeat-and-missing-number
#include<bits/stdc++.h>
using namespace std;
int repeatedNumber(const vector<int> &v) {
    long long int a=0,b=0,diff1,diff2,x=0,y=0,q=0,e=0,n=v.size();
    y=n * (n + 1) * (2 * n + 1) / 6;
    b=n * (n + 1) / 2;

    for(long long int i=0;i<n;i++){
        a+=v[i];
        x+=(long long)v[i]*(long long)v[i];
    }
    diff1=b-a;
    diff2=y-x;
    q=((diff2/diff1)+diff1)/2;
    e=q-diff1; 
    cout<<e<<q;
    return q,e; 

}

int main(){
    vector<int> v{3 ,1 ,2 ,5 ,3};
    repeatedNumber(v);
}