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
    ll n;
    cin>>n;
    ll a[n],b[n]={0},idx,c=0,k,z=0;
    vector<ll> arr;
    rep(n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    rep(n)
    {
        
            if(a[i]==a[i+1])
            {
                c++;
                k=a[i];
            }
            else
            {
                arr.pb(a[i]+c);
                c=0;
                k=0;
            }
    }
    z=*max_element(arr.begin(), arr.end());
    if(a[n-1]>=z)
    cout<<a[n-1]<<endl;
    else
    cout<<z<<endl;
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