#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,z=0,o=0;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0)
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    z++;
                }
                else
                o++;
            }
            if((z%2==0 && o%2==0) || z==o)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"YES\n";
        }
	}
	
	return 0;
}
