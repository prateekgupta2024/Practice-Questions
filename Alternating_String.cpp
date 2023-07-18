#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,z=0,o=0;
        string s;
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            z++;
            else
            o++;
        }
        if(z<o)
        cout<<2*z+1<<endl;
        else if(z>o)
        cout<<2*o+1<<endl;
        else
        cout<<2*z<<endl;

    }
    return 0;
}
