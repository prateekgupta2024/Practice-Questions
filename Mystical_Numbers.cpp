#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
using namespace std;




ll setBitNumber(ll n)
{
    
    ll k = (ll)(log2(n));
    return 1 << k;
}

void solve()
{
    ll n,l,r,x,j;
    cin>>n;
    vl arr;
    FILL(n,arr)
    ll q;
    cin>>q;
    rep(q)
    {
        cin>>l>>r>>x;
        ll c=0,p;
        if(x==0)
        p=0;
        else
        p=setBitNumber(x);
        for(j=l-1;j<r;j++)
        {
            if(arr[j]<p)
            c++;
            else if(arr[j]>=p*2)
            c++;
        }
        cout<<c<<endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // ll req[32]={0};
    // for(int i=2;i<32;i*=2)
    // {
    //     req[i]=setBitNumber(i);
    // }


    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}