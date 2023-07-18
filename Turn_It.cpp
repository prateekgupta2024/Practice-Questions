#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll u,v,a,s,temp;
        cin>>u>>v>>a>>s;
        temp=u*u-2*a*s;
        if(temp*temp>v*v && sqrt(temp)>0)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
    return 0;
}
