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
    ll n,m;
    cin>>n>>m;
    if(n%2==0)
    {
        if(m%2==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<n<<endl;
        }
    }
    else
    {
        if(m%2==0)
        cout<<m<<endl;
        else
        cout<<m+n-1<<endl;
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