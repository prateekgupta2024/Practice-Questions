#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ll n,m,mx=INT_MAX,mn=INT_MIN,i,temp;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>temp;
            mn=max(mn,temp);
            mx=min(mx,temp);
        }
        for(i=0;i<n;i++)
        {
            if(abs(mx-i)>abs(mn-i)) cout<<abs(mx-i)<<" ";
            else
            cout<<abs(mn-i)<<" ";
        }
        cout<<"\n";

        
    }
    return 0;
}
