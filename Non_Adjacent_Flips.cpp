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
        int n,adj=0,r=0,i,ads=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]==s[i+1] && s[i]=='1')
            {
                ads+=1;
            }
            if(s[i]=='1')
            r+=1;
        }
        if(r==0)
        cout<<0<<endl;
        else if(ads==0)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
    return 0;
}
