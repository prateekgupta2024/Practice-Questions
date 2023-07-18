#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll myXOR(ll x, ll y)
{
   return (x | y) & (~x | ~y);
}

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y;
        k=x&y;
        cout<<myXOR(x,k)+myXOR(y,k)<<endl;
    }
    return 0;
}
