#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

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
        ll a[n],p=0;
        ll k,f;              
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n-1;i++)
        {
            k=a[i+1]-a[i];
            f=a[i]-a[i-1];
            if((2*k==f) || (2*f==k))
            continue;
            else{
            cout<<"No\n";
            p=1;
            break;}
        }
        if(p==0)
        cout<<"Yes\n";
    }
    return 0;
}
