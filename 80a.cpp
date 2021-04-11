#include <iostream>
#include <bits/stdc++.h>


using namespace std;

bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int n,m;
    cin >> n >> m;
    n++;
    while(!prime(n))
    {
        n++;
    }
    if(n==m)
    {
        cout << "YES\n" << endl;
    }
    else
    {
        cout << "NO\n" << endl;
    }
    return 0;
}
