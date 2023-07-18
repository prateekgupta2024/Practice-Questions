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


int removeSignificantBit(int num)
{
	if (num <= 0)
	{
		return 0;
	}
	int r = num >> 1;
	r = r | (r >> 1);
	r = r | (r >> 2);
	r = r | (r >> 4);
	r = r | (r >> 8);
	r = r | (r >> 16);
	int value = r & num;
	return value;
}

void solve(){
    ll x;
    cin>>x;
    if(x%2==1)
    cout<<-1<<endl;
    else if(ceil(log2(x))== floor(log2(x)))
    cout<<-1<<endl;
    else
    cout<<0<<" "<<x/2<<" "<<removeSignificantBit(x/2)<<endl;
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