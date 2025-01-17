//Maximum and minimum of an array using minimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
struct minmax{
    int min;
    int max;
};
struct minmax fun(int a[],int n){
    struct minmax x;
    int i=0;
    if(n%2==0){
        if(a[i]>a[i+1]){
            x.min=a[i+1];
            x.max=a[i];
        }
        else{
            x.min=a[i];
            x.max=a[i+1];
        }
        i+=2;
    } 
    else{
        x.min=a[i];
        x.max=a[i];
        i=1;
    }
    while(i<n){
        if(a[i]>a[i+1]){
            if(a[i]>x.max){
                 x.max=a[i];
            }
            if(a[i+1]<x.min){
                x.min=a[i+1];
            }
        }
        else{
            if(a[i+1]>x.max){
                x.max=a[i+1];
            }
            if(a[i]<x.min){
                x.min=a[i];
            }
        }
        i+=2;
    }
    return x;
}
int main(){
    int a[]={10,2,14,21,5};
    cout<<fun(a,5).min<<"\n"<<fun(a,5).max;
}