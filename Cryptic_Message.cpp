#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,u;
        cin>>n;
        ll a[n],i;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        a[i]=a[i]%26;}
        for(i=0;i<n;i++)
        {
            u=(int)s[i] + a[i];
            if(u>122)
            {
                u=96 +u-122;
            }
            cout<<char(u);
        }
        cout<<"\n";
    }
    return 0;
}
