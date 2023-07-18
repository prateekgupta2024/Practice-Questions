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
    string s;
    cin>>s;
    string k=s;
    sort(s.begin(),s.end());
    char a=s[0];
    for(int i=n-1;i>=0;i--)
    {
        if(k[i]==a)
        {
            k.erase(k.begin()+(i));
            break;
        }
    }
    // cout<<k<<" ";
    k=a+k;
    cout<<k<<endl;
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