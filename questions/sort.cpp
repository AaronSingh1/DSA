#include<stdio.h>
void print(int arr[],int n){
    for(int i=0;i<n;++i){
        printf("%d ",arr[i]);
    }
}
void insertionsort(int arr[],int n){
    for(int i=0;i<n;++i){
        int key=arr[i],j=i-1;
        while(key < arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n-1;++j){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void quicksort(){
    
}
int main(){
    int arr[]={12, 11, 13, 5, 6 };
    int n=sizeof(arr)/4;
    print(arr,n);
  //insertionsort(arr,n);
    bubblesort(arr,n);
    printf("\n");
    print(arr,n);
}