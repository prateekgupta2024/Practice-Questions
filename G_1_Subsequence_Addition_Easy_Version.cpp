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
    ll n,f=0,s=1;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1 && a[0]>1)
    {
        cout<<"NO\n";
        return;
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i]<=s)
        {
            s+=a[i];
        }
        else
        {
            f=1;
            cout<<"NO\n";
            break;
        }
    }
    if(f==0)
    cout<<"YES\n";
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