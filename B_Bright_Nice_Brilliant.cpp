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
    if(n==1 || n==2)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            cout<<1<<" ";
            cout<<endl;
        }
        
    }
    else
    {
        cout<<1<<endl<<1<<" 1\n";
        for(int i=3;i<=n;i++)
        {
            cout<<"1 ";
            for(int j=0;j<i-2;j++)
            cout<<0<<" ";
            cout<<"1\n";
        }
    }
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