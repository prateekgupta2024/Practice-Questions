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
        ll a[4],i,s,d;
        for(i=0;i<4;i++)
        {
            cin>>a[i];
        }
        sort(a,a+4);
        if(a[0]<0)
        {
            s=a[0];
        }
        else
        {
            d=a[0];
        }
        

    }
    return 0;
}
