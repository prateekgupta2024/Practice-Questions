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
        int n,i,o=0,z=0;
        cin>>n;
        string a;
        cin>>a;
        for(i=0;i<n;i++)
        {
            if(a[i]=='0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        for(i=0;i<z;i++)
        cout<<"0";
        for(i=0;i<o;i++)
        cout<<"1";
        cout<<"\n";
    }
    return 0;
}
