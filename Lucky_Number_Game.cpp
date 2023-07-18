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
        int n,a,b,i;
        cin>>n>>a>>b;
        int arr[n],ma=0,mb=0,c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%a==0 && arr[i]%b==0)
            c++;
            else if(arr[i]%a==0)
            ma++;
            else if(arr[i]%b==0)
            mb++;
        }
        if(c==0)
        {
            if(ma>mb)
            cout<<"BOB\n";
            else if(ma==mb)
            cout<<"ALICE\n";
            else
            cout<<"ALICE\n";
        }
        else
        {
            if(ma>mb)
            cout<<"BOB\n";
            else if(ma==mb)
            {
                cout<<"BOB\n";
            }
            else
            {
                cout<<"ALICE\n";
            }
        }
    }
      
    

    return 0;
}
