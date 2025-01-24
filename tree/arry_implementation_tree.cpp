#include<bits/stdc++.h>
using namespace std;
char tree[10];
int root(char c){
    if(tree[0]!='\0'){
        cout<<"already present"<<endl;
    }
    else{
        tree[0]=c;
    }
    return 0;
}
int left(char c,int i){
    if(tree[i]=='\0'){
        cout<<"cant set child"<<endl;
    }
    else{
        tree[i*2+1]=c;
    }
}
int right(char c,int i){
    if(tree[i]=='\0'){
        cout<<"cant set child"<<endl;
    }
    else{
        tree[i*2+2]=c;
    }
}
void print_tree(){
    cout<<"\n";
    for(int i=0;i<10;++i){
        if(tree[i]!='\0'){
            cout<<tree[i];
        }
        else{
            cout<<"-";
        }
    }
}
int main(){
    root('A');
    left('B',0);
    right('C', 0);
    left('D', 1);
    right('E', 1);
    right('F', 2);
    print_tree();
}