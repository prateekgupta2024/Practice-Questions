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
#define sz(x) ((int)(x).size())
const ll INF = 1e15;
using namespace std;

ll healper(ll x)
{
    ll op=1;
    while(x%4==0)
    {
        x/=2;
        op++;
    }
    return op;
}

void solve()
{
    ll n;
    cin>>n;
    vl arr;
    FILL(n,arr);
    vl e;
    ll o=0,ans=0;
    for(auto&p:arr)
    {
        if(p&1)
        o++;
        else
        {
            if(p%2==0 && p%4!=0)
            {
                ans++;
                o++;
            }
            else
            e.pb(p);
        }}
    if(o>0)
    {
        cout<<ans+sz(e)-1<<endl;
        return;
    }
    ll z=INF;
    for(auto& x:e)
    {
        ll y=healper(x);
        z=min(z,y);
    }
    cout<<z+sz(e)-1<<endl;
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