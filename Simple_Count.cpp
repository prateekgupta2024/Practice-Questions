#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n,k,i,c=0;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    if(a[i]>=k)
    c++;}
    cout<<c;



    return 0;
}
