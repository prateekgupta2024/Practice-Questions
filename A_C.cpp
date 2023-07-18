#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;



void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    int mn=min(a,b);
    int mx=max(a,b);
    a=mn;
    b=mx;
    ll c=0;
    while(1)
    {
        mn+=mx;
        ll t=mn;
        mn=mx;
        mx=t;
        c++;
        if(mx>n)
        {
            cout<<c<<endl;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}