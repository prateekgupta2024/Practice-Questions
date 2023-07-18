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
    ll n;
    cin>>n;
    vl arr;
    FILL(n,arr);
    sort(arr.begin(),arr.end());
    rep(n)
    {
        if(i==0)
        continue;
        if(i==n-1)
        {
            arr[i]++;
        }
        if(arr[i]==arr[i-1] && arr[i]!=arr[i+1])
        {
            arr[i]++;
        }
        
    }
    set<int> s;
    rep(n)
    {
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;

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