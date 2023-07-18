#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int bs(vector<int> arr,ll x)
{
    ll l=-1,h=arr.size(),mid,ans=-10;
    while(h>l+1)
    {
        mid=(l+h)/2;
        if(arr[mid]>x) h=mid;
        /*if(arr[mid]==x)
        {    
            l=mid+1;
        }
        else if(x<arr[mid])
        {
            ans=mid;
            h=mid-1;
            /*if(mid<ans)
            ans=mid;
            if(l==h)
            return ans;
            h=mid-1;
            if(mid==0)
            {
                return 0;
            }
        }*/
        else
        {
            l=mid;
            /*
            if(ans==-10)
            l=mid+1;
            else
            {
            if(arr[mid]<x )
            l=mid+1;}*/
        }

    }
    if(h==arr.size())
    return -1;
    else
    return h;

}

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,x;
        cin>>n;
        vector<int> a;
        for(int i = 0; i<n; i++){
           cin>>x;
           int ch = bs(a,x);
           if(ch == -1) a.push_back(x);
           else a[ch] = x;
       }
       cout<<a.size()<<" ";
        for(auto &it:a)
        cout<<it<<" ";
        cout<<"\n";
    }

    return 0;
}

// in passing function parameter if vector<int> arr is passed then it makes copy of that ector and use it which takes more time
// instead use vector<int> &arr it changes inside the original vector