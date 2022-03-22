#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s=0;
    cin>>n;
    while(n>5){
        s = s + n/5;
        n=n/5;
    }
    cout<<s;
	return 0;
}
