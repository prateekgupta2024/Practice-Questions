#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;


void solve()
{
    ll n,k,i,arr[123]={0};
    cin>>n>>k;
    string s,ans="";
    char p=123;
    cin>>s;
    ll l=s.size();
    for(i=0;i<l;i++)
    {
        arr[s[i]]++;
    }
    for(i=0;i<123;i++)
    {
        if(arr[i]<=k)
        {
            k-=arr[i];
        }
        else
        {
            p=i;
            break;
        }
    }
    for(i=0;i<l;i++)
    {
        if(s[i]>p || (s[i]==p && k==0))
        {
            ans+=s[i];
        }
        else if(s[i]==p)
        k--;
    }
    cout<<ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}