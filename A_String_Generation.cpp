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
     ll k,n;
     cin>>n>>k;
     string s="";
     ll a=n/3;
     ll b=n%3;
     for(int i=0;i<a;i++)
     s+="abc";
     if(b>0)
     {
        s+='a';
        b--;
     }
     if(b>0)
     {
        s+='b';
        b--;
     }
     cout<<s<<endl;
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