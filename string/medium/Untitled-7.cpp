//Smallest window in a string containing all the characters of another string
#include<bits/stdc++.h>
using namespace std;
string fun(string s,string d){
    vector<int> vs(256,0),vd(256,0);
    for(int i=0;i<d.length();++i){
        vd[d[i]]++;
    }   
    int start=0,len=0,minln=INT_MAX,startind=-1,count=0;
    for(int i=0;i<s.length();i++){
        vs[s[i]]++;
        if(vd[s[i]]!=0 && vs[s[i]]<=vd[s[i]]){
            count++;
        }
        if(count==d.length()){
            while(vs[s[start]]>vd[s[start]] || vd[s[start]]==0){
                if(vs[s[start]]>vd[s[start]]){
                    vs[s[start]]--;
                }
                start++;
            }    
            len=i-start+1;
            if(len<minln){
                minln=len;
                startind=start;
            }
        }
    }
    if(startind==-1){
        return "-1";
    }
    return s.substr(startind,minln);
}
int main(){
    string s1 = "zoomlazapzo", s2 = "oza";
    cout<<fun(s1,s2);
}