//Group Anagrams
#include<bits/stdc++.h>
using namespace std;
void fun(vector<string> &v){
    map<map<char,int>,vector<string>> m;
    for(auto str:v){
        map<char,int> temp;
        vector<string> t_v;
        for(int i=0;i<str.length();i++){
            temp[str[i]]++;
        }
        auto it=m.find(temp);
        if(it!=m.end()){
            it->second.push_back(str);
        }
        else{
            t_v.push_back(str);
            m.insert({temp,t_v});
        }
    }   
    //output
    vector<vector<string>> result;
    for(auto it = m.begin();it != m.end(); ++it){
        result.push_back(it->second);
    }
    for(int i = 0; i < result.size(); ++i){
        cout << "[";
        for(int j = 0; j < result[i].size()-1; ++j){
            cout << result[i][j] << ", ";
        }
        cout<< result[i][result[i].size()-1];
        cout << "]";
    }
}
int main(){
    vector<string> my_list = { "cat", "dog", "ogd", "god", "atc" };
    fun(my_list);
    
}