//MO’s Algorithm
#include<bits/stdc++.h>
using namespace std;
int block;
struct Query
{
    int L, R;
};
bool fun2(Query x, Query y){
    if(x.L/block!=y.L/block){
        return x.L/block<y.L/block;
    }
    return x.R<y.R;
}
void fun(int a[],int n,Query q[],int m){
    block=(int)sqrt(n);
    sort(q,q+m,fun2);
    int cl=0,cr=0,cs=0;
    for(int i=0;i<m;++i){
        int r=q[i].R,l=q[i].L;
        while(cl<l){
            cs-=a[cl];
            cl++;
        }
        while(cl>l){
            cs+=a[cl-1];
            cl--;
        }
        while(cr<=r){
            cs+=a[cr]; 
            cr++; 
        }
        while(cr>r+1){
            cs-=a[cr-1];
            cr--;
        }
        cout << "Sum of [" << l << ", " << r
             << "] is "  << cs << endl;
    }
}
int main(){
    int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int n = sizeof(a)/sizeof(a[0]);
    Query q[] = {{0, 4}, {1, 3}, {2, 4}};
    int m = sizeof(q)/sizeof(q[0]);
    fun(a, n, q, m);
}