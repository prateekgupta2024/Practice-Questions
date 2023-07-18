#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,temp,s=0,p=0,q=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            a[i]*=-1;
        }
        int min=a[0],max=a[1];
        for(i=0;i<n;i++)
        {
            if(a[i]<min && i%2==0)
            {
                min=a[i];
                
            }
            if(a[i]>max && i%2!=0)
            {
                max=a[i];
                
            }
        }
        //cout<<min<<" "<<max<<endl;;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]==min && p==0)
                {
                    s+=a[i];
                    p=1;
                }
                if(a[i]!=min)
                {
                    s+=a[i];
                }
            }

            if(i%2!=0)
            {
            if(a[i]==max && q==0)
                {
                    s-=a[i];
                    q=1;
                }
                if(a[i]!=max)
                {
                    s-=a[i];
                }
            }

        }
        if(min>max)
        {
            cout<<s+min-max<<"\n";
        }
        else
        cout<<s-min+max<<"\n";

	}
	
	return 0;
}
