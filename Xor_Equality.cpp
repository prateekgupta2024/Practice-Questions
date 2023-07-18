#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const long long int mod = 1e9 + 7;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,i=0,r=2,p=1;
        cin >> n;
        ll b=n-1;
        while(b>0)
        {
            if(b%2)
            {
                p=(p*r)%mod;
            }
            r=(r*r)%mod;
            b=b/2;
        }
        cout<<p<<endl;
    }
    return 0;
}
// learn method to find modulo of 10^9+7. 