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
    ll k=n-1,c=0,a,b;
    if(n==1)
    cout<<"0\n";
    else if(n<=4 && n>1)
    cout<<"1\n";
    else if(n<=6 && n>4)
    cout<<"2\n";
    else
    {
    a=k/5;
    b=k%5;
    if(b<=3 && b>=1)
    c++;
    else if(b==4)
    c+=2;
    cout<<c+a*2<<endl;}
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