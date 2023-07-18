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
        ll x;
        cin>>x;
        /*if(x==2)
        cout<<"2 3 4\n";
        else if(x==1)
        cout<<"1 5 0\n";
        else{
        if(x%2==0)
        cout<<x<<" "<<x+1<<" "<<x+2<<endl;
        else
        cout<<x<<" "<<x-1<<" "<<x-2<<endl;}*/
        // or 
        cout<<x<<" "<<x+(int)pow(2.0,20.0)<<" "<<0<<endl;

    }


    return 0;
}