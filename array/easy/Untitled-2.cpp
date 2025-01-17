//Array Reverse 
#include<bits/stdc++.h>
using namespace std;
int rev(vector<int> arr){
    int s=0,e=arr.size();
    while(s<e){
        int t=arr[s];
        arr[s]=arr[e];
        arr[e]=t;
        s++;
        e--;
    }
    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<"\n";
    }

}
int main(){
    vector<int> arr={1,2,3,4,5};
  
    rev(arr);
}