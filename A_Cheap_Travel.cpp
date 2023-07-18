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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll x1,x2,x3;
    x1=n*a;
    x2=(n/m)*b+(n%m)*a;
    x3=(n/m + 1)*b;
    if(x1>x2)
    {
        if(x2>x3)
        cout<<x3;
        else
        cout<<x2;
    }
    else
    {
        if(x1>x3)
        cout<<x3;
        else
        cout<<x1;
    }


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}