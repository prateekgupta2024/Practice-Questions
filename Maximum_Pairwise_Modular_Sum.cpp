#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
using namespace std;


void solve()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n],i,k,l,max=0;
    rep(n)
    cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
        
        k=(arr[i+1]-arr[i]);
        l=(arr[i]-arr[i+1]);
        if(k<0)
        k=m+k;
        if(l<0)
        l=m+l;
        if(k<l)
        k=l;
        if(i==0)
        {
            max=arr[i]+arr[i+1]+k;
        }
        if((arr[i]+arr[i+1]+k)>max)
        max=arr[i]+arr[i+1]+k;
    }
    cout<<max<<endl;
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