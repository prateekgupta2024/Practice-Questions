#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;



void solve(int s,int d,int h,int n)
{
    if(n==1)
    {
        cout<<s<<" "<<d<<endl;return;
    }
    solve(s,h,d,n-1);
    cout<<s<<" "<<d<<endl;
    solve(h,d,s,n-1);
    return;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    int s=1,h=2,d=3;
    cout<<pow(2,n)-1<<endl;
    solve(s,d,h,n);
    return 0;
}