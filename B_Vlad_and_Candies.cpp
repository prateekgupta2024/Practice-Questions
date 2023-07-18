#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,k=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        if(n==1)
        {
            if(a[0]>1)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        else
        {
        if(a[n-1]-1==a[n-2] || a[n-1]==a[n-2])
            {
                k=1;
            }
        if(k==0)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        }

        
    }
    return 0;
}
