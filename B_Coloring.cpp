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
    ll n,m,k,me,mf;
    cin>>n>>m>>k;
    vl arr;
    fill(m,arr);
    if((n%k)==0){
            mf=n/k;
            me=k;}
    else{
            mf=n/k+1;
            me=(n%k);
        }

    for(int i=0;i<m;i++)
        {
            if(arr[i]>mf)
            {
                me=-1;
                break;
            }
            else if(arr[i]==mf)
            {
                me--;
            }
        }
    if(me<0)
    cout<<"NO\n";
    else
    cout<<"YES\n";


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