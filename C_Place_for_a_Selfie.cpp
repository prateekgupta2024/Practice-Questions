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
    ll n,m,j=0,ans=INT_MAX;
    cin>>n>>m;
    vl k;
    fill(n,k);
    sort(k.begin(),k.end());
    ll a,b,c;
    for(int i=0;i<m;i++)
    {
        int f=0;
        j=0;
        cin>>a>>b>>c;
        int l=0,h=n-1;
        ll q=4*a*c;
        while(l<=h)
        {
            j=l+(h-l)/2;
            ll r=pow((b-k[j])*1.0,2.0);
            if(r-q<0)
            {
                break;
            }
            else if(k[j]<b)
            {
                l=j+1;
            }
            else
            {
                h=j-1;
            }
        }
        ll r=pow((b-k[j])*1.0,2.0);
        if(r-q<0)
        cout<<"YES\n"<<k[j]<<endl;
        else
        cout<<"NO\n";
    }
    cout<<endl;
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