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
        int n,k=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' || s[i]=='5')
            {
                k=1;
                break;
            }
        }
        if(k==1)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
