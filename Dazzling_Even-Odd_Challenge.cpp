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
        ll n,i,s=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%(n/2)==0 && (2*s/n)%2!=0)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}
