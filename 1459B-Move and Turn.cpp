#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;
//pattern matching

int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 4 <<endl;
        return 0;
    }
    if(n%2==0)
    {
        cout << (n/2+1)*(n/2+1)<<endl;
    }
    else {
        cout << 2*(n/2+1)*(n/2+2)<<endl;
        return 0;
    }

    return 0;
}
