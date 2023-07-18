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
    ll m,n,x;
    cin>>m;
    n=2*m;
    vl arr;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.pb(x);
        ans+=abs(x);
    }
    sort(arr.begin(),arr.end());
    if(n==2)
    {
        ans=abs(arr[0]-arr[1]);
    }
    if(n==4)
    {
        ll temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=abs(arr[i]-2);
        }
        ans=min(ans,temp);
    }
    if(n%4==0)
    {
        ll temp=0;
        for(int i=0;i<n-1;i++)
        {
            temp+=abs(arr[i]+1);
        }
        temp+=abs(arr[n-1]-n/2);
        ans=min(ans,temp);
    }
    cout<<ans<<endl;
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