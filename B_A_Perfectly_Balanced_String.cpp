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
        string s;
        ll tp=0,at=0,p=0,arr[26]={0};
        cin>>s;
        ll n=s.length(),i;
        for(i=0;i<n-1;i++)
        {
            arr[(int)s[i]-97]++;
            if(s[i]==s[i+1])
            {
                tp++;
            }
            else
            at++;
            if(s[0]==s[n-1])
            p=1;
        }
        sort(arr,arr+n);
        if(arr[25]-arr[24]);


    }
    return 0;
}
