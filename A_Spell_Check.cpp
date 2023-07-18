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
    string s;
    cin>>s;
    if(n==5)
    {
        for(int i=0;i<5;i++)
        {
            if(s[i]=='T')
            c+=10;
            if(s[i]=='i')
            c+=100;
            if(s[i]=='m')
            c+=1000;
            if(s[i]=='u')
            c+=10000;
            if(s[i]=='r')
            c+=100000;

            
        }
        if(c==111110)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
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