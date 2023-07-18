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
        ll n,i,temp,a=0,c=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        for(i=0;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
            c++;
            else
            {
                if(a==0)
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    if(arr[i]>=arr[i-1] && i!=0)
                    c++;
                    if(i==0)
                    c++;
                    a=1;
                }
            }
        }
        if(c==n-1)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}
