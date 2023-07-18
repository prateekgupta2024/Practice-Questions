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
    ll n,a,i;
    cin>>n;
    ll k=n%2;
    if(k==1)
    {
        a=n/2;
        cout<<"7";
        for(i=0;i<a-1;i++)
        {
            cout<<"1";
        }
        cout<<"\n";
        
    }
    else
    {
        for(i=0;i<n/2;i++)
        cout<<"1";
        cout<<"\n";
    }

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    solve();}
    return 0;
}