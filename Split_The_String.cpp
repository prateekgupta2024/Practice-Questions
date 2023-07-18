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
    ll n,k,z=0;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        z++;
    }
    ll o=n-z;
    ll v=max(o,z);
    ll u=min(o,z);
    ll p=v-u;
    if(p==0)
    cout<<"0\n";
    else if(p<=k-1)
    cout<<"1\n";
    else{
    //cout<<p/k + (ll)(p%k!=0)<<endl;
    //float w=p/k;
    ll w=p%k;
    if(w==0)
    cout<<p/k<<endl;
    else
    cout<<p/k+1<<endl;}
    //cout<<ceil(w)<<endl;}
    
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