#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],res[n]={0},i,s=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        res[i]=(n-i-1)*a[i+1]-a[i]-s;          // 1 3 5 8 8
        //cout<<res[i]<<" ";
        s+=a[i];
    }
    cout<<*max_element(res,res+n);
    return 0;
}
