#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long x = pow(2,n);
    long long y  =0;

    long long mid = n/2;

    for(int i=1;i<n;i++)
    {
        if(i<mid)
        {
             x+=pow(2,i);
        }
        else
        {
            y+= pow(2,i);
        }
    }

    cout << x-y <<endl;
}


int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}
