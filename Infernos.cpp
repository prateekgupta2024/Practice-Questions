#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
const long long int mod=1e9+7;
#define fill(n,arr) for(ll i=0;i<n;i++){cin>>arr[i];}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,c1=0,c2=0,a,b,c,i;
        cin>>n>>x;
        ll arr[n];
        fill(n,arr);
        sort(arr,arr+n);
        for(i=0;i<=n-1;i++)
        {
            a=arr[i]/x;
            b=arr[i]%x;
            if(b!=0)
            c1+=(a+1);
            else
            c1+=a;
        
        }
        c2=arr[n-1];
        /*
        for(i=n-1;i>0;i--)
        {
            if(arr[n-1]==arr[n-2])
            {
                c2=arr[i];
                break;
            }
            else
            {
                a=arr[i]-arr[i-1];
                c2=arr[i-1];
                b=a/x;
                c=a%x;
                if(c!=0)
                c2+=(b+1);
            }
        }*/
        if(c1>c2)
        cout<<c2<<endl;
        else
        cout<<c1<<endl;


        
    }
    return 0;
}
