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
    ll n,m,i,j,p=0,mc,mr;
    cin>>n>>m;
    string s,a[n][m];
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<m;j++)
        {
            a[i][j]=s[j];
            if(s[j]=='R')
            {
                if(p==0)
                {
                    p=1;
                    mc=j;
                    mr=i;
                }
                if(mc>=j && mr>=i)
                {
                    mc=j;
                    mr=i;
                }
                if(mr>i && mc<j)
                {
                    p=99;
                    break;
                }
                if(mc>j && mr<i)
                {
                    p=99;
                    break;
                }
            }
        }

    }
    if(p==1)
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