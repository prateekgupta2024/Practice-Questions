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
        string s;
        cin>>s;
        int l=s.size(),i,c=0;
        char a=s[0],b=s[l-1];
        int max=0;
        for(i=0;i<l;i++)
        {
            if(s[i]==a || s[i]==b)
            {
                if(max<c)
                max=c;
                c=0;
            }
            else
            {
                c++;
            }
        }
        if(max==0)
        cout<<"-1\n";
        else
        cout<<max<<endl;
    }
    return 0;
}

