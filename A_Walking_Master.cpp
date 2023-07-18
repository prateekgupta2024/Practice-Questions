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
    ll a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    if((d-b)<0)
    cout<<-1<<endl;
    else if((d-b)<(c-a))
    cout<<-1<<endl;
    else
    {
        if(c-a>=0)
        cout<<((d-b)-abs(c-a))*2+abs(c-a)<<endl;
        else
        cout<<(d-b)*2+abs(c-a)<<endl;


    }
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