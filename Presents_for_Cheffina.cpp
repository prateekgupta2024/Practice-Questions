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
        ll n;
        cin>>n;
        ll p=n/5;
        if(n<=4)
        cout<<n<<endl;
        else
        cout<<n-p<<endl;
    }
    return 0;
}
