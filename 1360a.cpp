#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int a,b;
        cin >> a >> b;

        int miniresult = min(max(a,2*b),max(2*a,b));

        cout << miniresult*miniresult <<endl;
    }
    return 0;
}

