#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
using namespace std;


void solve()
{
    ll n,i,p;
    cin>>n;
    ll arr[2*n],a[n+1]={0};
    for(i=0;i<2*n;i++)
    {
    cin>>arr[i];
    a[arr[i]]++;
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]==0)
        {
            cout<<"YES\n";
            break;
        }
        else if(a[i]==1)
        {
            cout<<"NO\n";
            break;
        }
        p=i;
    }
    if(p==n)
    cout<<"NO\n";

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}