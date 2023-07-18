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
    ll n,k,d,w,ans=1;
    cin>>n>>k>>d>>w;
    vl arr;
    fill(n,arr);
    ll c=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[b]+w+d)
        {
            c++;
            if(c==k)
            {
                c=0;
                b=i+1;
                if(i!=n-1)
                ans++;
            }
        }
        else
        {
            ans++;
            b=i;
            c=1;
        }
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