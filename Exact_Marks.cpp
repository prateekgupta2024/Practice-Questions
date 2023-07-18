#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int q=x/3,r=x%3;
        if(x==0)
        cout<<"YES\n0 0 "<<n<<"\n";
        else if(r==0 && q<=n)
        {
            cout<<"YES\n"<<q<<" 0 "<<n-q<<endl;
        }
        else if(n-q-1>=(q+1)*3-x && q<=n-1 && r!=0)
        {
            cout<<"YES\n"<<q+1<<" "<<(q+1)*3 -x<<" "<<n-(q+1+ 3(q+1)-x)<<endl;
            
        }
        
        else
        cout<<"NO\n";
    }
    return 0;
}