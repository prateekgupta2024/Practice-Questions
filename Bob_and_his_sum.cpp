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
    
        ll n, i = 0, sum = 0;
        cin >> n;
        ll a[i];
        for (i = 0; i < n; i++)
            cin >> a[i];
        ll a1 = 0, a2 = 0;
        for (i = 0; i < n; i++)
        {
            sum += a[i];
            if (i % 2 == 1)
            {
                if (sum >= 0)
                {
                    a1 += sum + 1;
                    sum = -1;
                }
            }
            else
            {
                if (sum <= 0)
                {
                    a1 += (-sum) + 1;
                    sum = 1;
                }
            }
        }
        sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += a[i];
            if (i % 2 == 0)
            {
                if (sum >= 0)
                {
                    a2 += sum + 1;
                    sum = -1;
                }
            }
            else
            {
                if (sum <= 0)
                {
                    a2 += (-sum) + 1;
                    sum = 1;
                }
            }
        }
        cout << min(a1, a2);
    return 0;
}
