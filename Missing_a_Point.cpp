#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,i,cx=1,cy=1;
        cin>>n;
        ll k=4*n-1;
        ll x[k],y[k];
        for(i=0;i<k;i++)
        {
            cin>>x[i]>>y[i];
        }
        sort(x,x+k);
        sort(y,y+k);
        for(i=0;i<k-1;i++)
        {
            if(x[i]==x[i+1])
            {
                cx++;
            }
            else
            {
                if(cx%2==1)
                {
                    cout<<x[i]<<" ";
                    break;
                }
                cx=1;
            }
            if(i==k-2)
            {
                if(x[k-1]!=x[k-2])
                {
                    cout<<x[k-1]<<" ";
                    break;
                }
            }
        }
        for(i=0;i<k-1;i++)
        {
            if(y[i]==y[i+1])
            {
                cy++;
            }
            else
            {
                if(cy%2==1)
                {
                    cout<<y[i]<<endl;
                    break;
                }
                cy=1;
            }
            if(i==k-2)
            {
                if(y[k-1]!=y[k-2])
                {
                    cout<<y[k-1]<<" ";
                    break;
                }
            }
        }


    }
    return 0;
}
