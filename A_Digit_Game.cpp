#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;



void solve()
{
    ll n,bo=0,ro=0,re=0,be=0,k;
    cin>>n>>k;
    ll i=1;
    while(k>0)
    {
        ll x=k%10;
        if(i&1)
        {
            if(x&1)
            ro++;
            else
            re++;
        }
        else
        {
            if(i&1)
            bo++;
            else
            be++;
        }
        k/=10;
        i++;
    }
    if(n&1==0)
    {
        swap(ro,bo);
        swap(re,be);
    }
    i=1;
    while(n>1)
    {
        if(i&1)
        {
            if(re>0)
            re--;
            else
            ro--;
        }
        else
        {
            if(bo>0)
            bo--;
            else
            be--;
        }
        i++;
        n--;
    }
    if(re || be)
    cout<<2<<endl;
    else
    cout<<1<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}