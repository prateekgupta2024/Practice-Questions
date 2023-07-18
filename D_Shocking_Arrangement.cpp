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
    vl arr;
    ll a[n];
    fill(n,arr);
    sort(arr.begin(),arr.end());
    ll i=0,j=n-1,k=0;
    ll mx=arr[n-1],mn=arr[0],s1=0;
    while(i<=j)
    {
        if(abs(s1+arr[j])<abs(s1+arr[i])){
        a[k]=arr[j];
        s1=s1+arr[j];j--;}
        else{
        a[k]=arr[i];
        s1+=arr[i];i++;}
        k++;
    }
    ll s=0,p=mx-mn;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(abs(s)>=p)
        {
            f=1;
            cout<<"No\n";
            break;
        }
    }
    if(f==0){
    cout<<"Yes\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;}
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