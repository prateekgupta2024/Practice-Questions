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
    ll n,c=1,j=1;
    cin>>n;
    vl arr;
    vl brr;
    FILL(n,arr);
    sort(arr.begin(),arr.end());
    brr.pb(2);
    for(ll i=1;i<n;i++)
    {
        ll k=brr.size();
        for(ll j=0;j<brr.size();j++)
        {
            if(arr[i]>=brr[j])
            {
            brr[j]++;
            break;
            }
            if(j==(k-1))
            {
                brr.pb(2);
                break;
            }
        }
         //cout<<brr.size()<<" ";
    }
    cout<<brr.size()<<endl;
    // for(ll i=0;i<brr.size();i++)
    // cout<<brr[i]<<" ";
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