#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--)
	{
	    string s,k;
        cin>>s>>k;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==k[i])
            {
                cout<<"G";
            }
            else
            cout<<"B";
        }
        cout<<"\n";


	}
	
	return 0;
}
