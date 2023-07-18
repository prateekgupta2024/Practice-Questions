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
    ll n,f=0;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<n;i++)
    {
        if(mpp.count(s[i]))
        {
            if(mpp[s[i]]==i%2)
            continue;
            else
            {
            cout<<"NO\n";
            
            f=1;
            break;
            }
        }
        else
        {
            mpp[s[i]]=i%2;
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