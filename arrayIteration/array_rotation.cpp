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

void rotate(int array[10], int n, int d, int flag){
    //if d ( steps > n )
    d=d%n;
    //left rotation
    if(flag==1){
        reverse(array,0,d-1);
        reverse(array,d,n-1);
        reverse(array,0,n-1);
    }
    //right rotation
    else if(flag==2){
        reverse(array,n-d,n-1);
        reverse(array,0,n-1-d);
        reverse(array,0,n-1);
    }
}

void print(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n, array[10],d,flag=0;
    while(1){
        cout<<"Enter no of elements : ";
        cin>>n;
        cout<<"Enter the elements : ";
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        cout<<"Enter the no of steps :";
        cin>>d;
        cout<<"Enter 1 for left rotation, 2 for right rotation : ";
        cin>>flag;
        rotate(array,n,d,flag);
        cout<<"Rotated Array : ";
        print(array,n);
        cout<<endl;
        cout<<endl;
    }
}