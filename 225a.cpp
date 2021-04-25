#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,x,y;
    bool flag = true;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        cin >> x >> y;

        if(x==m || x==7-m || y==m || y==7-m)
        {
            flag = false;
            break;
        }

    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
