//Maximum Subarray Sum – Kadane’s Algorithm
#include<bits/stdc++.h>
using namespace std;
void fun(vector<int> num){
    int MF=INT_MIN,M=0;
    for(int i=0;i<num.size();i++){
        M+=num[i];
        MF=max(M,MF);
        M=max(0,M);
    }
    cout<<MF;
}
int main(){
    vector<int> num{ -2, -3, 4, -1, -2, 1, 5, -3 };
    fun(num);
}