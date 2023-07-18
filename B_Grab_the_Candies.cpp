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
    ll n;
    cin>>n;
    vl arr;
    ll c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.pb(x);
        if(x%2==0)
        c1+=x;
        else
        c2+=x;
    }
    if(c1>c2)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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