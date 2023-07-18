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
        ll n,i,j,k=0;
        ll arr[]={0,1,0,1,0};
        cin>>n;
        if(n>=3 && n%2==1)
        {
        cout<<"YES\n";
        for(i=0;i<n;i++)
        {
            
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                cout<<arr[k%n];
                k=k%5;
                }
                else
                {
                    cout<<arr[k%n];
                    k++;
                }
            }
            cout<<"\n";
        }
        }
        else
        cout<<"NO\n";


    }
    return 0;
}
