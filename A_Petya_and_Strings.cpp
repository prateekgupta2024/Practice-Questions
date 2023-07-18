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
    string s1,s2;
    cin>>s1>>s2;
    ll l=s1.size(),i,c=0;
    for(i=0;i<l;i++)
    {
        if(s1[i]==s2[i] || (s1[i]-32)==(s2[i]) || (s2[i]-32)==s1[i])
        c=i;
        else
        {
            if((s1[i]>96 && s2[i]>96) || (s1[i]<96 && s2[i]<96))
            {
                if(s1[i]>s2[i])
                cout<<1;
                else
                cout<<-1;
                break;
            }
            else if(s1[i]>96 && s2[i]<96)
            {
                if(s1[i]-32>s2[i])
                cout<<1;
                else
                cout<<-1;
                break;
            }
            else if(s1[i]<96 && s2[i]>96)
            {
                if(s2[i]-32>s1[i])
                cout<<-1;
                else
                cout<<1;
                break;
            }
        }
        if(c==l-1)
        cout<<"0";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}