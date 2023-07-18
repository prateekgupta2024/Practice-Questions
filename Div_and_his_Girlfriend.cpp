#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n,u=0,v=0,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if((int)s[i]<=90 && (int)s[i]>=65)
        u++;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        v++;
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        v++;
    }
    //cout<<u<<" "<<v;
    if(u>v)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
