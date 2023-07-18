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
    vector<ll> v(n+1);
    vector<ll> pre(n+1);
    for(ll i=1;i<n+1;i++)
    {
        cin>>v[i];
        pre[i]=pre[i-1]+v[i];
    }
    ll ans=1;
    ll l=1,h=n;
    while(l<=h)
    {
        ll mid=l+(h-l)/2;
        cout<<"? "<<mid-l+1<<" ";
        for(ll i=l;i<=mid;i++)
        {
            cout<<i<<" ";
        }
        ll x;
        cin>>x;
        ll res=pre[mid]-pre[l-1];
        if(x>res)
        {
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"!"<<" "<<ans<<endl;
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