#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n],a=0,b=0,j,se,so,m,pa=0;
        vector<int> e,o;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                e.push_back(arr[i]);
            }
            else
            {
                o.push_back(arr[i]);
            }
        }
        sort(e.rbegin(),e.rend());
        sort(o.rbegin(),o.rend());
        se=e.size();
        so=o.size();
        i=0,j=0;
        m=*max_element(arr, arr + n);
        if(m%2==0)
        pa=1;
        else
        pa=2;
        while(i<se && j<so)
        {
            if(pa==1)
            {
                a+=e[i];
                b+=o[j];
                i++;j++;pa=2;
            }
            else
            {
                a+=o[j];
                b+=e[i];
                i++;j++;pa=1;
            }
        }


    }

    return 0;
}
