#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9 + 7

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, l1[123] = {0}, l2[123] = {0}, c = 0, len, pan;
        string a, b;
        cin >> a >> b >> n;
        string arr[n], s, m;
        m = a + b;
        
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }
        len = m.size();
        pan = s.size();

        for (i = 0; i < len; i++)
        {
            l1[m[i]]++;
        }
        for (i = 0; i < pan; i++)
        {
            l2[s[i]]++;
        }
        for (i = 97; i <= 122; i++)
        {
            if (l1[i] >= l2[i])
                c++;
        }
        if (c == 26)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
