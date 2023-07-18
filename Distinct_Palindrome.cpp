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
    ll n,x;
    cin>>n>>x;
    string s="";
    ll p=n/2,k=97,w=x;
    // 97 - 122
    if(n==1 && x==1){
    cout<<"a"<<endl;
    return;}
    if((n%2==0 && x>n/2) || x>26)
    cout<<"-1\n";
    else if(x>n/2+1)
    cout<<"-1\n";
    else
    {
        if(n%2==0)
        {
            while(p)
            {
                if(w>0){
                s+=(char)k;
                k++;
                w--;}
                else{
                s+='a';}
                p--;
            }
            string f=s;
            reverse(f.begin(), f.end());
            cout<<s<<f<<endl;
        }
        else
        {
            while(p)
            {
                if(w>0){
                s+=(char)k;
                k++;
                w--;}
                else
                {
                s+='a';}
                p--;
            }
            string f=s;
            reverse(f.begin(), f.end());
            if(x==n/2+1)
            s+=(char)k;
            else
            {
                s+='a';
            }
            cout<<s<<f<<endl;
        }
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