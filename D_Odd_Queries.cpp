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
    ll n,q,tot=0;
    cin>>n>>q;
    vl arr;
    arr.pb(0);
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        arr.pb(x+arr[i-1]);
        tot+=x;
    }
    for(int i=0;i<q;i++)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll ans=arr[n]-arr[r]+arr[l-1]+k*(r-l+1);
        if(ans&1)
        cout<<"YES\n";
        else
        cout<<"NO\n";


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