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
    ll n,e=0,o=0,c,z=0,df=0,dfo=0;
    cin>>n;
    ll arr[2*n];
    rep(2*n)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        e++;
        else
        o++;
        if(arr[i]%4==0)
        df++;
        if(arr[i]%4==1)
        dfo++;
    }
    if(e>o)
    {
        c=n-o;
        if(e-df>=c)
        cout<<c<<endl;
        else
        {
            cout<<e-df+(c-e+df)*2<<endl;
        }
    }
    else
    {
        c=n-e;
        if(o-dfo>=c)
        cout<<c<<endl;
        else
        {
            cout<<n-dfo + (c-n+dfo)*2<<endl;
        }
    }

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