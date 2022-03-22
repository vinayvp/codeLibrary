#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,arr[];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0,c=0,d=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1) c++;
        else if(arr[i]==0) d++;
        else if(arr[i]<-1 || arr[i]>1){
            if(arr[i]<-1){
                cnt = cnt + abs(arr[i]+1);
                c++;
            }
            else if(arr[i]>1){
                cnt = cnt + arr[i]-1;
            }
        }
    }
    if(c%2==0){
        cnt = cnt +d;
    }
    else if(c%2!=0){
        if(d==0){
            cnt=cnt+2;
        }
        else{
                cnt=cnt+d;
        }
    }
    cout<<cnt;
	return 0;
}
