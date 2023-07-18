#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n],b[n],c[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            c[i]=a[i]+b[n-1-i];
        }
        cout<<*max_element(c,c+n)<<"\n";
    }
    return 0;
}
