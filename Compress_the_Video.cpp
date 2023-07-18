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


void solve()
{
    ll n,i,c=1,s=0;
    cin>>n;
    vl arr;
    FILL(n,arr);
    if(n==1)
    cout<<1<<endl;
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                c++;
            }
            else
            c=1;
            if(c==1)
            s+=c;
        }
        cout<<s<<endl;
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