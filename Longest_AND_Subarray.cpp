#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,a,b;
        cin>>n;
        if(n==1)
        cout<<"1\n";
        else
        {
        a=log2(n);
        b=pow(2,a);
        cout<<max(n-b+1,b/2)<<endl;
        }
        
    }
    return 0;
}
// new thing learn to find how much power of something use log.
// for 2^n= 2 4 8 16 32 64
// difference :   if diff. b/w 16 and 8 is k=8 then diff b/w 8 and 4 will be k/2=4