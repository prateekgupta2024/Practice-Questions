#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        ll arr[n], sum = 0, x;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if ((2 * sum) % n != 0)
        {
            cout << 0 << endl;
            continue;
        }
        x = 2 * sum / n;
        unordered_map<ll, ll> mp;
        ll c = 0;
        for (i = 0; i < n; i++)
        {
            c += mp[x - arr[i]];
            mp[arr[i]]++;
        }
        cout << c << endl;
    }
    return 0;
}
