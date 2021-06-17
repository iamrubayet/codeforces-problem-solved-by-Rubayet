#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    int result=0;
    cin >>n;

    for(int i=1;i<=n/2;i++)
    {
        if (n%i==0)
        {
            result++;
        }

    }

    cout << result << endl;
    return 0;
}
