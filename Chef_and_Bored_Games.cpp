#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s=0,i;
        cin>>n;
        for(i=n;i>=1;i=i-2)
        s+=i*i;
        cout<<s<<endl;
    }
    return 0;
}
