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
    ll n;
    cin>>n;
    int arr[n],k=INT_MIN;
    int a[5]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<4)
        a[arr[i]]++;
        k=max(k,arr[i]);
    }
    if(a[0]<=n/2 && n%2==0)
    cout<<0<<endl;
    else if(a[0]<=n/2+1 && n%2==1)
    cout<<0<<endl;
    else{
        if(k==1)
        cout<<2<<endl;
        else
        cout<<1<<endl;
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