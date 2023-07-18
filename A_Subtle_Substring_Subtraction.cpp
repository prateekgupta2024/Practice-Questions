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
        ll a = 0, b = 0,i;
        string s;
        cin >> s;
        ll l = s.length();
        if (l == 1)
            cout << "Bob " <<(int)s[0]-96<<endl;
        else if (l == 2)
            cout << "Alice " << (int)s[0]-96 - 96 + (int)s[1]<<endl;
        else if (l % 2 == 0)
        {
            for (i = 0; i < l; i++)
            {
                a +=s[i]-96;
            }
            cout << "Alice " << a<<endl;
        }
        else
        {
            if (s[0] > s[l - 1])
            {
                for (i = 0; i < l - 1; i++)
                {
                    a += s[i]-96;
                }
                b+=s[l-1]-96;
            }
            else
            {
                for (i = 1; i < l; i++)
                {
                    a +=s[i]-96;
                }
                b+=s[0]-96;
            }
            cout << "Alice " << a-b<<endl;
        }
    }
    return 0;
}
