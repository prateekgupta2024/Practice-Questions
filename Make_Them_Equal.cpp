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
        int n;
        cin>>n;
        int a[n],o=0,e=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            e++;
            else
            o++;
        }
        if(o==n || e==n)
        cout<<0<<endl;
        else if(o/2<e)
        cout<<e<<endl;
        else if(o%2==0)
        cout<<o/2<<endl;
        else
        cout<<e<<endl;

    }
    return 0;
}
