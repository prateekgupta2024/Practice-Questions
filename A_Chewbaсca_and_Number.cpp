#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;


void solve()
{
    ll n,r=0,c=1;
    cin>>n;
    vl arr;
    if(n==9)
    cout<<9;
    else{
    while(n)
    {
        r=n%10;
        n/=10;
        if(r>4)
        arr.pb(9-r);
        else
        arr.pb(r);
    }
    reverse(arr.begin(),arr.end());
    for(auto &itr:arr)
    {
        if(c==1 && itr==0)
        {cout<<9;
        c=2;}
        else
        {
            c=2;
        cout<<itr;}
    }}

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    
    return 0;
}