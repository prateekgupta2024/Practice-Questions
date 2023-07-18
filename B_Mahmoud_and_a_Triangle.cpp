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
    vl arr;
    fill(n,arr);
    sort(arr.begin(),arr.end());
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]+arr[i]>arr[i+1])
        {cout<<"YES\n";
        return;}

    }
    cout<<"NO\n";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
  
    // {
        solve();
    // }
    return 0;
}