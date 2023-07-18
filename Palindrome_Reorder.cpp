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
    string s,k,m="";
    cin>>s;
    map<char,int> mp;
    ll l=s.size(),i,p=0;
    for(i=0;i<l;i++)
    {
        if(mp.find(s[i])==mp.end())
        mp[s[i]]=1;
        else
        {
            mp[s[i]]++;
        }
    }
    for(auto &it : mp)
    {
        if(it.second%2==1 && p==0 && l%2==1) //odd length and odd count
        {
            p=1;
        }
        else if(it.second%2==1 && p==0 && l%2==0)  //even length and odd count
        {
            cout<<"NO SOLUTION\n";
            return;
        }
        else if(it.second%2==1 && p==1)
        {
            cout<<"NO SOLUTION\n";
            return;
        }
        
    }
    for(auto &it : mp)
    {
        if(it.second%2==1)
        k=it.first;
        for(i=0;i<(it.second/2);i++)
        m+=it.first;
    }
    cout<<m<<k;
    reverse(m.begin(), m.end());
    cout<<m<<endl;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}


//  code is correct (fututre reference)