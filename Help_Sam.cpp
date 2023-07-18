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
    ll n;
    cin >> n;
    ll a[n], i, cnt = 0, t, j;
    for (i = 0; i < n; i++)
        cin >> a[i];
    ll m = *min_element(a, a + n);
    for (i = 0; i < n; i++)
    {
        if (a[i] != m)
        {
            while (a[i] > m)
            {
                a[i] /= 2;
                cnt++;
            }
            if (m > a[i])
            {
                m = a[i];
                i = -1;
            }
        }
        //cout<<cnt <<" ";
    }
    cout<<cnt;

return 0;
}
