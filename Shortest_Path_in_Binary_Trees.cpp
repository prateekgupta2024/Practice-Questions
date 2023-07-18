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
    ll n1,n2,c1=0,c2=0;
    cin>>n1>>n2;
    while(n1>=1 && n2>=1)
    {
        if(n1>n2)
        {
            n1/=2;
            c1++;
        }
        else if(n2>n1)
        {
            n2/=2;
            c2++;
        }
        else
        {
        cout<<c1+c2<<endl;
        break;}
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