#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define FILL(n, arr)            \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        arr.pb(x);              \
    }
#define fill(n, arr)             \
    for (int i = 1; i <= n; i++) \
    {                            \
        ll x;                    \
        cin >> x;                \
        arr.pb(x);               \
    }
#define rep(n) for (int i = 0; i < n; i++)
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a=n/2;
    if(n%2==1 || n<4)
    cout<<"-1\n";
    else
    {
        ll temp=a/3;
        if(a%3==1 || a%3==2)
        temp++;
        ll p=a/2;
        cout<<min(temp,p)<<" "<<max(temp,p)<<endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}