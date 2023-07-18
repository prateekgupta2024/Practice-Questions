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
        ll n,k;
        cin>>n;
        if(n==1 || n==2)
        cout<<"1\n";
        else if(n==3)
        cout<<"3\n";
        else
        {
            ll ans=3;
            k=n-3;
            ans+=4+(k-1)*2;
            cout<<ans;
            printf("\n");
        }

        
    }
    return 0;
}
