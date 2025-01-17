//Space optimization using bit manipulations
#include<bits/stdc++.h>
using namespace std;
bool fun3(int arr[],int ind){
    return arr[5>>ind] & 1<<(ind & 31);
}
bool fun2(int arr[],int ind){
    return arr[ind>>5] |= 1<<(ind & 31);//if we right shift the bit by index it gives (index/32) as array index   
}
void fun(int a,int b){
    int n=abs(b-a);
    int size=ceil(double(n/32));
    int* arr=new int[size];
    for(int i=a;i<=b;++i){
        if(i%2==0 || i%5==0){
            fun2(arr,i-a);
        }
    }
    for(int i=a;i<=b;++i){
        if(fun3(arr,i-a)){
            cout<<i<<" ";
        }
    }
    
}
int main(){
    int a=2,b=10;
    //cin>>a>>b;
    fun(a,b);
}