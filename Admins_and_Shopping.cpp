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
     int n,x;
     cin>>n>>x;
     int arr[n];
     for(int i=0;i<n;i++)
     cin>>arr[i];
     sort(arr,arr+n);
     int k=0;
     while(x>arr[k])
     {
      k++;
     }   
     int sum=n-k;
     int val=0;
     for(int j=0;j<k;j++)
     val=val+arr[j];
     while(x<=0)
     {
         sum=sum+k;
         x=x-val;
     }
     cout<<sum<<endl;
    }
    return 0;
}

