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
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    ll i, sum = 0, e = 0, o1 = 0, o2 = 0;
    rep(n)
    {
        cin >> a[i];
        sum+=a[i];
        if (a[i] % 2 == 0)
            e += a[i];
        else
            o1++;
    }
    rep(n)
    {
        cin >> b[i];
        sum+=b[i];
        if (b[i] % 2 == 1)
        {
            o2++;
        }
    }
    int c=abs(o1-o2);
    cout << sum/2-c/2 << endl;
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