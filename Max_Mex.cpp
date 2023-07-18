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
        ll n, k, i = 0;
        cin >> n >> k;
        vector<int> arr;
        bool bl[200001] = {false};
        for (i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            arr.push_back(a);
            bl[a] = true;
        }
        for (i = 0; i < 200001; i++)
        {
            if (!bl[i])
            {
                if (k == 0)
                {
                    cout << i << "\n";
                    break;
                }
                else
                    k--;
            }
        }
    }
    return 0;
}
// learn new concept of using bool .  Standard question .