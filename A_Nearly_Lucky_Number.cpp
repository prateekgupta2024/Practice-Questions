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
    ll n,c=0,p=0;
    cin>>n;
    while(n)
    {
        if(n%10==4 || n%10==7)
        c++;
        n/=10;
    }
    ll i=0,j=c;
    while(c)
    {
        i++;
        if(c%10==4 || c%10==7)
        p++;
        c/=10;
    }
    if(i==p && j!=0)
    cout<<"YES";
    else
    cout<<"NO";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}