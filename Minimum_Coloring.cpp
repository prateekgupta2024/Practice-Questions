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
        int n,m,x1,x2,y1,y2,i,j,a,b;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        a=(x1+y1-2)%2;
        b=(x2+y2-2)%2;
        if(a==b)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(i==x1-1 && j==y1-1)
                    cout<<"1 ";
                    else if(i==x2-1 && j==y2-1)
                    cout<<"2 ";
                    else if((i+j)%2==0 && a==0)
                    {
                        cout<<"1 ";
                    }
                    else if((i+j)%2!=0 && a==0)
                    {
                        cout<<"4 ";
                    }
                    else if((i+j)%2==0 && a==1)
                    {
                        cout<<"4 ";
                    }
                    else if((i+j)%2!=0 && a==1)
                    {
                        cout<< "1 ";
                    }

                }
                cout<<"\n";
            }
        }
        else
        {
            if(a==0)
            {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                    {
                        cout<<"1 ";
                    }
                    else
                    {
                        cout<<"2 ";
                    }
                }
                cout<<"\n";
            }
            }
            else
            {
                for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                    {
                        cout<<"2 ";
                    }
                    else
                    {
                        cout<<"1 ";
                    }
                }
                cout<<"\n";
            }
            }

        }
    }
    return 0;
}
