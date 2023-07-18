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
    ll n,m=0,k,i;
    cin>>n;
    vl arr;
    FILL(n,arr);
    rep(n)
    {
        if(arr[i]>m)
        {k=i;
        m=arr[i];}
    }
    ll z=arr.size()-1,ans=n;
    rep(n)
    {
        if(arr[i]==m)
        {
            if( i<z)
            {
                if(arr[i+1]!=m){
            ans=1;break;}}
        }
        if(arr[i]==m)
        {
            if( i>0)
            {
                if(arr[i-1]!=m){
                ans=1;
                break;}
            }
        }
    }
    cout<<ans<<endl;
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