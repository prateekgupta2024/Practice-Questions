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
    ll c=0;
    while(n)
    {
        c+=n/5;
        n=n/5;

    }
    cout<<c<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}