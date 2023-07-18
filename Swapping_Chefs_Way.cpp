#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,i;
        string s,f;
        cin>>n>>s;
        f=s;
        sort(f.begin(),f.end());
        for(i=0;i<n;i++)
        {
            if(f[i]==s[i] || f[i]==s[n-i-1])
            c++;
        }
        if(c==n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
