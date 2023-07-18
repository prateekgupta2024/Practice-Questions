#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;




void solve()
{
    ll n,c=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        if((s1[i]=='B' && s2[i]=='G') || (s1[i]=='G' && s2[i]=='B'))
        {
            c=c;
        }
        if((s1[i]=='R' && s2[i]!='R') || (s2[i]=='R' && s1[i]!='R'))
        c++;
    }
    if(c==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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