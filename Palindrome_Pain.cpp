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
        ll x, y, d, i, k;
        cin >> x >> y;
        if (x % 2 == 1 && y % 2 == 1)
            cout << "-1\n";
        else if (x % 2 == 0 && y % 2 == 0)
        {
            cout << string(x / 2, 'a') << string(y, 'b') << string(x / 2, 'a') << endl;
            cout << string(y / 2, 'b') << string(x, 'a') << string(y / 2, 'b') << endl;
        }
        else
        {
            if (x > y)
            {
                d = x - y;
                k = d / 2;
                cout << string(k, 'a');
                for (i = 0; i < y; i++)
                    cout << "ab";
                cout << string(k + 1, 'a') << endl;
                if (x % 2 == 0)
                {
                    cout << string(x / 2, 'a') << string(y, 'b') << string(x / 2, 'a') << endl;
                }
                else
                {
                    cout << string(y / 2, 'b') << string(x, 'a') << string(y / 2, 'b') << endl;
                }
            }
            else
            {
                d = y - x;
                k = d / 2;
                cout << string(k, 'b');
                for (i = 0; i < x; i++)
                    cout << "ba";
                cout << string(k + 1, 'b') << endl;
                if (x % 2 == 0)
                {
                    cout << string(x / 2, 'a') << string(y, 'b') << string(x / 2, 'a') << endl;
                }
                else
                {
                    cout << string(y / 2, 'b') << string(x, 'a') << string(y / 2, 'b') << endl;
                }
            }
        }
    }
    return 0;
}
