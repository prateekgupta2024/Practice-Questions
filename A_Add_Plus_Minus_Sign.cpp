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
    ll n,i;
    string s;
    cin>>n>>s;
    string ans="",k="";
    if(s[0]=='1')
    k="+";
    else
    k="-";
    for(i=1;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(k=="+")
            {
                ans+="-";
                k="-";
            }
            else
            {
                ans+="+";
                k="+";
            }
        }
        else
        ans+='+';
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