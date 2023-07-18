#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int setBitNumber(int n)
{
    
    n |= n >> 1;
 
    
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;

    n = ((n + 1) >> 1) |
        (n & (1 << ((sizeof(n) * CHAR_BIT)-1)));
    return n;
}

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        
    }
    return 0;
}
