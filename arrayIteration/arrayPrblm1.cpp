#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,s,max,x;
    cin>>t;
    while(t>0){
        cin>>n>>s;
        max=-1;
        for(int i=0;i<=n;i++){
            x=s-i;
            if(x<=n && x>0){
                if(max<abs(x-i)){
                    max=abs(x-i);
                }
            }
        }
        cout<<max<<endl;
        t--;
    }
	return 0;
}