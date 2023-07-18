#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define rep(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;



void solve()
{
    ll n;
    cin>>n;
    vl arr;
    // char ch[2];
    // ch[0]='a';
    // ch[1]='b';
    fill(n,arr);
    string s="";
    for(int i=0;i<52;i++)
    s+='a';
    cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        string s1="";
        for(int j=0;j<52;j++)
        {
            if(j<arr[i])
            s1+=s[j];
            else
            {
                if(s[j]=='a')
                s1+='b';
                else
                s1+='a';
            }
        }
        cout<<s1<<endl;
        s=s1;

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}