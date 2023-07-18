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
        ll n,m,x;
        cin>>n>>m>>x;
        ll p=(n*x)/(x+1);
        if(x<m)
        cout<<p<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}
