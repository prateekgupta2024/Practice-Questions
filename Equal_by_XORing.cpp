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
    ll a,b,n;
    cin>>a>>b>>n;
    if(a==b)
    cout<<0<<endl;
    else{
    ll p=a^b;
    if(p<n)
    cout<<1<<endl;
    else{
        ll q=(int)(log2(n));
        ll r=(int)(log2(p));
        if(r==q)
        {
            if(1<<q==n)
            cout<<-1<<endl;
            else
            cout<<2<<endl;
        }
        else
        cout<<-1<<endl;
    }}
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