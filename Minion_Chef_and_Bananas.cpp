#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll k,ll n,ll H,ll a[])
{
    ll tt=0;
    for(ll i=0;i<n;i++)
    {
        tt+=(a[i]+k-1)/k;
    }
    return tt<=H;
}

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        ll n,H,i;
        cin>>n>>H;
        ll a[n],k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int l=1, h=a[n-1];
        ll ans=h;
        while(l<=h)
        {
            ll m=(l+h)/2;
            if(check(m,n,H,a))
            {
                ans= min(ans,m);
                h=m-1;
            }
            else
            l=m+1;
        }
        cout<<ans<<endl;

    }
    return 0;
}
