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
    ll n,r=0;
    cin>>n;
    vl arr;
    while(n)
    {
        r=n%10;
        n/=10;
        if(r>4)
        arr.pb(9-r);
        else
        arr.pb(r);
    }
    for(auto &itr:arr)
    {
        cout<<itr;
    }

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    
    return 0;
}