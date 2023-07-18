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
    ll n,m,f=0;
    cin>>m>>n;
    vl a1;
    vl a2;
    fill(m,a1);
    fill(n,a2);
    map<int,int> mpp;
    for(int i=0;i<m;i++)
    {
        mpp[a1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mpp[a2[i]]>0)
        {
            cout<<"YES\n"<<1<<" "<<a2[i]<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"NO\n";


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