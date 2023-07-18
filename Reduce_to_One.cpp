#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long int mod = 1e9 + 7;


int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mx=1e6+2;
    ll fact12[mx];
    cout<<"mamu"<<endl;
    fact12[1]=1;
    for(ll i=2;i<mx;i++)
    {
        fact12[i]=((fact12[i-1]%mod)*(i%mod))%mod;
    }
    

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        /*ll i=0,j=n,k;
        while(i<=n-1)
        {
            k=i+j+i*j;
            k=k%mod;
            i++;
            j=k;
        }
        cout<<k<<endl;*/
        cout << (fact12[n + 1] - 1)%mod << endl;
    }
    return 0;
}
// got the observation from tutorial not by own.
// i was solving by the method commented. observatoion of factorial got from tutorial.
