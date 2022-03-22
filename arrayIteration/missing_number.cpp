#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,temp,x,rem;;
    cin>>n;
    x=1;
    for(int i=0;i<n-1;i++){
        x=x+(x+1);
        cin>>temp;
        rem=x-temp;
    }
    cout<<rem;
	return 0;
}
