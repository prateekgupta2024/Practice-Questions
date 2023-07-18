#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(k<=3)
        {
        ll k=pow(2.0,n);
        cout<<1<<" "<<(ll)k<<" ";}
        else
        {
            double cnt=1/4;
            for(i=4;i<=n;i++)
            {
                ll k=pow(2.0,i-1);
                if(i%2==0)
                {
                    cnt+=1/k;
                }
                else
                {
                    cnt-=1/k;
                }
            }
        }
        cout<<1<<
    }
    return 0;
}
