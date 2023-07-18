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
    ll n, cnt = 0;
    cin >> n;
    if(n<10)
    cout<<9;
    else{
    while (n > 1)
    {
        ll a = n % 10;
        cnt += 10 - a;
        n+= 10-a;
        while (n % 10 == 0)
        {
            n /= 10;
        }
        if (n < 10)
            break;
    }
    cnt += 9;
    cout << cnt;}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}