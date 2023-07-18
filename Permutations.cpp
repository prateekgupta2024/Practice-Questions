#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    ll n,i;
    cin>>n;
    if(n<=3 && n!=1)
    cout<<"NO SOLUTION";
    else
    {
        cout<<n/2+1<<" ";
        for(i=1;i<=n/2;i++)
        {
            if(n&1)
            cout<<i<<" "<<n+1-i<<" ";
            else
            {
                if(i==n/2)
                cout<<i;
                else
                cout<<i<<" "<<n+1-i<<" ";
            }

        }
    }
    return 0;
}
