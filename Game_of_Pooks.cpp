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
        if(n==1 || n==2)
        cout<<"1\n";
        else if(n==3)
        cout<<n-1<<"\n";
        /*else if(n&1)
        cout<<n<<endl;*/
        else
        cout<<n<<endl;
    }                  //6-6 5-5 7-7 4
    return 0;
}
