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
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
    ll row[n]={0};
    ll col[n]={0};

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]==1)
        {
            row[i]=1;
            col[j]=1;
        }
    }
    ll cnt=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(row[i]==0 && col[j]==0)
        {
            cnt++;
            row[i]=1;
            col[j]=1;
        }
    }

    if(cnt&1)
    cout<<"Ashish"<<endl;
    else
    cout<<"Vivek\n";

    
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