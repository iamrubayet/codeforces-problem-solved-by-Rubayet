#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long n,m;
    cin >> n >> m;

    long long odd = (n+1)/2;

    if(odd >=m )
    {
        cout << 2LL * m-1 << endl;

    }

    else
    {
        m -= odd;
        cout << 2*m << endl;
    }
    return 0;
}
