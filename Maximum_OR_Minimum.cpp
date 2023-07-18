#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
const long long int mod=1e9+7;
#define fill(n,arr) for(ll i=0;i<n;i++){cin>>arr[i];}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],z=0,o=0,i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            z++;
            else
            o++;
        }
        if(z>o)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}
