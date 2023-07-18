#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;


void solve()
{
    ll n,m,ans=0;
    cin>>n>>m;
    vector<string> v;
    vl arr;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        v.pb(x);
    }
    for(int i=0;i<m;i++)
    {
        int a[6]={0};
        for(int j=0;j<n;j++)
        {
            a[v[j][i]-65]++;
        }
        arr.pb(*max_element(a,a+6));  
    }
    for(int i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        ans+=x*arr[i];
    }
    cout<<ans<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}