#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int x;
    int sum=0;

    int k,n,w;

    cin >> k >> n >> w ;

    for(int i=1;i<=w;i++)
    {
        x=i*k;
        sum+=x;
    }

    if(n<sum)
    {
        cout << sum-n << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
