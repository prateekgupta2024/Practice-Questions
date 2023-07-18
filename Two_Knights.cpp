#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // your code goes here
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n,i=1;
    cin>>n;
    while(i<=n)
    {
    cout<<(i*i)*(i*i-1)/2-4*(i-1)*(i-2)<<endl;
    i++;
    }
    return 0;
}

/*  two knights can attack eachother only in 2*3 3*2 board.
so count number of 3*2 and 2*3 board in a n*n board i.e. 4*(n-1)*(n-2) and then 
required ans is total i.e. n^2*(n^2-1) minus above.

which is finally : (n^2 * n^2-1)/2-4*(n-1)*(n-2)*/
