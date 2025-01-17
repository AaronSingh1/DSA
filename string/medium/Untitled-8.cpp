//Wildcard string matching
#include<bits/stdc++.h>
using namespace std;
bool fun1(const char* f,const char* s){
    if(*f=='\0' &&*s=='\0'){
        return true;
    }
    if(*f=='*'){
        while(*(f+1)=='*'){
            f++;
        }
    }
    if(*f=='*' && *s=='\0' && *(f+1)!='\0'){
        return false;
    }
    if(*f==*s || *f=='?'){
        return fun1((f+1),(s+1));
    }
    if(*f=='*'){
        return fun1((f+1),(s))||fun1((f),(s+1));
    }
    return false;
}
string fun(const string& s, const string& d) {
    return fun1(s.c_str(), d.c_str()) ? "YES" : "NO";
}

int main() {
    string s1 = "abc*bc?", s2 = "abcdhghgbcd";
    cout << fun(s1, s2);
}
