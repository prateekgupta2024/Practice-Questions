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
        string s;
        cin>>s;
        ll arr[123]={0},k=0,i;
        for(i=0;i<s.size();i++)
        {
            arr[s[i]]++;
        }
        for(i=97;i<123;i++)
        {
            if(arr[i]%2==1)
            {
                cout<<(char)i<<endl;
                k=1;
            }
        }
        if(k==0)
        cout<<"-1\n";
    }
    return 0;
}
