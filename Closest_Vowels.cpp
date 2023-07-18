#include <iostream>
#include <bits/stdc++.h>
const unsigned int mod=1e9+7;
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
using namespace std;


void solve()
{
    ll n,i,l,c=1;
    cin>>n;
    string s;
    cin>>s;
    l=s.length();
    ll arr[4]={99,103,108,114};
    for(i=0;i<l;i++)
    {
        if(s[i]=='c' || s[i]=='g' || s[i]=='l' || s[i]=='r')
        c*=2;
    }
    cout<<c%mod<<endl;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}