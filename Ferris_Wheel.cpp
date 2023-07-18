#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    ll i = 0, j = n - 1, c = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    i = 0;
    while (i <= j)
    {
        if (i == j)
        {
            c++;
            break;
        }
        else if (arr[i] + arr[j] <= x)
        {
            c++;
            i++;
            j--;
        }
        else
        {
            c++;
            j--;
        }
    }
    cout << c << endl;

    return 0;
}
