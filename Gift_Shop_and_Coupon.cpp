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
        int n,k,i,c=0,sum=0;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<=k)
            {
            c++;
            }
            else
            {
                    sum-=arr[i];
                    sum+=arr[i]/2;
                    if(sum<=k)
                    {
                    c++;
                    break;
                    }
                    break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
