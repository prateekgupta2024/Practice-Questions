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
    ll n,i=0;
    cin>>n;
    ll arr[n],b[n];
    b[0]=0;
    rep(n)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==1 && b[i]==0)
        {
            b[i+1]=1;
        }
        else if(arr[i]==1 && b[i]==1)
        {
            b[i+1]=0;
        }
        else if(arr[i]==0 && b[i]==0)
        {
            b[i+1]=0;
        }
        else if(arr[i]==0 && b[i]==1)
        {
            b[i+1]=1;
        }
    }
    
        if((b[0]+b[n-1])%2==arr[n-1])
        cout<<"YES\n";
        else
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