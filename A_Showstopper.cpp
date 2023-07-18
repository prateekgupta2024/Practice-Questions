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
    ll n,f=0;
    cin>>n;
    vl a1,a2;
    fill(n,a1);
    fill(n,a2);
    if(a1[n-1]>a2[n-1])
    {
        f=1;
    }
    for(int i=0;i<n;i++)
    {
        if(f==1)
        {
            if(a2[i]>a1[i])
            swap(a2[i],a1[i]);
        }
        else
        {
            if(a1[i]>a2[i])
            swap(a2[i],a1[i]);
        }
    }
    int k=*max_element(a1.begin(),a1.end());
    int l=*max_element(a2.begin(),a2.end());
    if(k==a1[n-1]&& l==a2[n-1])
    cout<<"Yes\n";
    else
    cout<<"No\n";
    
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