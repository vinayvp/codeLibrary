#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;
}

void reverse(int array[10], int a, int b){
    int len= b-a+1;
    for(int i=a;i<a+len/2;i++){
        swap(&array[i],&array[b]);
        b--;
    }
}

void print(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n, array[10],a,b;
    while(1){
        cout<<"Enter no of elements : ";
        cin>>n;
        cout<<"Enter the elements : ";
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        cout<<"Enter the range :";
        cin>>a>>b;
        reverse(array,a-1,b-1);
        cout<<"Reversed Array : ";
        print(array,n);
        cout<<endl;
        cout<<endl;
    }
}