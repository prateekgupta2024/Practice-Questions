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
    ll n,mn=0,mx=0,i,c=0;
    cin>>n;
    ll arr[n];
    rep(n)
        {
            cin>>arr[i];
        }
    mn=arr[0];
    mx=arr[0];
    if(n==1)
    cout<<"YES\n";
    else
    {
        
        for(i=0;i<n;i++)
        {
            if(arr[i]>=mx || arr[i]<=mn)
            c++;
            if(arr[i]>mx)
            mx=arr[i];
            if(arr[i]<mn)
            mn=arr[i];
            // if(arr[i]>arr[i+1])
            // mx++;
        }
        if(c==n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}