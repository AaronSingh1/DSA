#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        char data;
        node* left,*right,*next=NULL;
        node(char x){
            data=x;
            left=right=NULL;
        }
};
class stk{
    public:
        node *head=NULL;
        void push(node* x){
            if(head == NULL){
                head=x;
            }
            else{
                x->next=head;
                head=x;
            }
        }
        node* pop(){
            node *p=head;
            head=head->next;
            return p;
        }
};
node* inorder(node* x){
    if(x==NULL){
        return x;
    }
    inorder(x->left);
    cout<<x->data;
    inorder(x->right);
}
int main(){
    string s="ABC*+D/";
    node *x,*y,*z;
    
    stk st;
    for(int i=0;i<s.length();++i){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
            z=new node(s[i]);
            x=st.pop();
            y=st.pop();
            z->left=y;
            z->right=x;
            st.push(z);
        }
        else{
            z=new node(s[i]);
            st.push(z);
        }
    }
    inorder(z);
}