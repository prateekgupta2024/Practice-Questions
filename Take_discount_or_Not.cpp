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
    ll n,x,y,i;
    cin>>n>>x>>y;
    ll arr[n],brr[n],s1=0,s2=0;
    rep(n)
    {
        cin>>arr[i];
        s1+=arr[i];
        brr[i]=arr[i]-y;
        if(brr[i]>0)
        {
            s2+=brr[i];
        }
    }
    if(s2+x>=s1)
    cout<<"NO COUPON\n";
    else
    cout<<"COUPON\n";


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