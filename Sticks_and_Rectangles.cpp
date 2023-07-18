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
    int arr[n],count[101]={0},req=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        count[arr[i]]++;
    }
    for(int i=1;i<101;i++)
    {
        if(count[i]%2==1)
        {
            req+=1;
        }
    }
    cout<<(n+req)%4+req<<endl;

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







