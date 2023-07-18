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
    ll n,i,p=0,c=0,val;
	    cin>>n;
	    ll arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			mp[arr[i]]++;
		}
		for(auto i:mp)
		{
			if(i.second==1)
			{
			c++;
			val=i.first;}
			if(p<i.second)
			p=i.second;
		}
		ll mx=*max_element(arr, arr + n);
		if(val==mx && c==1)
		{
			if(p>2)
			cout<<"1\n";
			else
			cout<<"2\n";
		}
		else if(c==1){
			cout<<"1\n";
		}
		else
		{
			if(c%2==0)
			cout<<c/2<<endl;
			else
			cout<<c/2+1<<endl;
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