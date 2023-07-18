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



ll printDivisors(ll n)
{
    unordered_set <ll>s;
	for (ll i = 1; i <= n; i++)
		if (n % i == 0)
        {
            s.insert(i);
            s.insert(n-i);}
    unordered_set <ll>::iterator itr;
   
  
  
    return s.size();
}

void solve()
{
    ll n,k;
    ll p;
    cin>>n;
    p=printDivisors(n);
    cout<<p-2<<endl;

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