#include<bits/stdc++.h>
using namespace std;

//PROBLEM: To find (i), decimal from binary number (2), binary from decimal

// Solution using normal method
int bin2dec (int n, string s){
    int dec = 0, b=1;
    for(int i=n-1;i>-1;i--){
        if(s[i]=='1'){
            dec = dec * b;
        }
        b = b*2;
    }
}

string dec2bin (int n){
    vector<char> s;
    while(n){
        s.push_back(n);
        n>>=1; 
    }  
    string s1(s.begin(), s.end());
    return s;
}

int main(){
    int n;
    string s;
    cin>>s;
    cout<<"Dec of "<<s<<" is "<<bin2dec(s.length(),s)<<endl;
    cin>>n;
    cout<<"Bin of "<<n<<" is "<<dec2bin(n);
    return 0;
}