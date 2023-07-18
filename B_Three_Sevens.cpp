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
    ll ans[n+1]={0};
    map<int,int> mpp;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int> a;
        for(int j=0;j<x;j++)
        {
            int k;
            cin>>k;
            a.pb(k);
            mpp[k]++;
        }
        v.pb(a);
    }
    for(int i=0;i<n;i++)
    {
        f=0;
        for(int j=0;j<v[i].size();j++)
        {
            if(mpp[v[i][j]]>1)
            {
                mpp[v[i][j]]--;
            }
            else if(mpp[v[i][j]]==1)
            {
                ans[i+1]=v[i][j];
                mpp[v[i][j]]--;
                f=1;
            }
        }
        if(f==0)
        {
            break;
            
        }
    }
    if(f==0)
    cout<<-1<<endl;
    else{
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;}

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