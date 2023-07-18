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



ll power(ll x, ll y)
{
    ll res = 1;
 
    while (y > 0) {
        
        if (y & 1)
            res = (res%mod * x)%mod;
 
        
        y = y >> 1; 
        x = (x%mod * x%mod)%mod; 
    }
    return res%mod;
}



void solve()
{
    ll n,x,ans;
    cin>>n>>x;
    ans=(((power(2,n-1)%mod-1)*(x))%mod+x)%mod;
    cout<<ans%mod<<endl;


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