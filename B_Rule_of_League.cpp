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
    ll i,j=1,c=0;
    ll n,x,y;
    cin>>n>>x>>y;
    if(x==0 && y==0)
    cout<<"-1\n";
    else if(x!=0 && y!=0)
    cout<<"-1\n";
    else if((n-1)%(x+y)!=0)
    cout<<"-1\n";
    else{
        ll ans=(n-1)/(x+y);
        for(i=1;i<n;i++)
        {
            if(c==x+y)
            {
                c=0;
                j=i+1;
            }
            cout<<j<<" ";
            c++;
        }
        cout<<"\n";
        
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