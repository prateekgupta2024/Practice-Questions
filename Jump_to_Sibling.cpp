#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define ss second
#define fi first
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
using namespace std;


void solve(){
    ll n;
    cin>>n;
    vi arr;
    FILL(n,arr);
    ll e=-1,o=-1;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if((arr[0]%2==0 && arr[n-1]%2==0) || (arr[0]%2==1 && arr[n-1]%2==1))
    {
        if(arr[0]%2==0 && arr[n-1]%2==0)
        cout<<e<<endl;
        if(arr[0]%2==1 && arr[n-1]%2==1)
        cout<<o<<endl;
    }
    else
    {
        if(o<e)
        cout<<o+1<<endl;
        else
        cout<<e+1<<endl;
    }
    
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
     solve();
  }
  return 0;
}