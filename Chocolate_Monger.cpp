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
        ll n,x,i,c=1;
        cin>>n>>x;
        ll arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                if(x>0)
                x--;
            }
            if(arr[i]!=arr[i+1])
            c++;
        }
        cout<<c-x<<endl;

    }
    return 0;
}
