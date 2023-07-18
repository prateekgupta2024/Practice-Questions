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
    ll n,i,j,cnt=0;
    cin>>n;
    ll a[n],b[n],c[n];
    rep(n)
    {
        cin>>a[i];
    }
    rep(n)
    cin>>b[i];
    for(i=0;i<=n-1;i++)
    {
        c[i]=abs(a[i]^b[i]);
    }
    map<int,int> mp;
    for(i=0;i<n;i++)
    {
        mp[c[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second>1)
        cnt+=(x.second*(x.second-1))/2;
    }
    cout<<cnt<<endl;
    
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