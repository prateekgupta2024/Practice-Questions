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
    ll n,x;
    cin>>n>>x;
    vl arr;
    fill(n,arr);
    ll s=accumulate(arr.begin(),arr.end(),0);
    if(s%x!=0)
    cout<<n<<endl;
    
    else
    {
        ll i=0,j=n-1;
        ll c1=n,c2=n;
        ll temp=s;
        while(s%x==0)
        {
            s-=arr[i];
            c1--;
            i++;
            if(i==n)
            break;

        }
        s=temp;
        while(s%x==0)
        {
            s-=arr[j];
            c2--;
            j--;
            if(j==-1)
            break;
        }
        int p=max(c1,c2);
        if(p>0)
        cout<<max(c1,c2)<<endl;
        else
        cout<<-1<<endl;
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