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
    fill(n,arr);
    ll k=arr[0];
    for(int i=1;i<n;i++)
    {
        k^=arr[i];
    }
    if(n&1)
    {
        ll p=k^0;
        cout<<p<<endl;
    }
    else
    {
        if(k==0)
        cout<<10<<endl;
        else
        cout<<-1<<endl;
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