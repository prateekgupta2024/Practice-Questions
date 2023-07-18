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
        ll n,c=0;
        cin>>n;
        while(n)
        {
            if(n%2==0)
            {
                c++;
            }
            n=n>>1;
        }
        cout<<c<<endl;
    }
    return 0;
}

