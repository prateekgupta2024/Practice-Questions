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
    ll n,k;
    cin>>n>>k;
    ll a[n],s=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i<k)
        s+=a[i];
    }
    ll i=0,j=k;
    for(int i=0;i<k;i++)
    {
        j=i;
    while(j<=n-1){
        a[i]=max(a[i],a[j]);
        j+=k;
    }
    
    }
    for(int i=0;i<k;i++)
    ans+=a[i];
    cout<<ans<<endl;
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