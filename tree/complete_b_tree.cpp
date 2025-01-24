#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left,* right;
};
node* newnode(int n){
    node* temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node* cbt(int arr[],int i,int n){
    node *root=NULL;
    if(i<n){
        root=newnode(arr[i]);
        root->left=cbt(arr,i*2+1,n);
        root->right=cbt(arr,i*2+2,n);
    }
    return root;
}
void inOrder(node* root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data <<" ";
        inOrder(root->right);
    }
}
int main(){
    int a[9]={1, 2, 3, 4, 5, 6, 6, 6, 6 };
    node* root=NULL;
    root=cbt(a,0,9);
    inOrder(root);

}