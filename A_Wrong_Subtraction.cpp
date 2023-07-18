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
    ll n,k,c=0,a;
    cin>>n>>k;
    while(n>=1)
    {
        
        a=n%10;
        if(a>0 && k>=c+a)
        {
            
        n-=a;
        c+=a;}
        else if(a>0 && k<c+a)
        {
            n-=k-c;
            c+=k-c;
            
        }
        else
        {
        n/=10;c++;}
        if(c==k)
        {
        cout<<n;
        break;}
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}