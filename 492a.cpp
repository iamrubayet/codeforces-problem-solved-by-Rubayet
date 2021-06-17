#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int v=0;
    int levels=0;
    int totalused =0;


    for(int i=1;i<=n;i++)
    {
        v= v+i;
        totalused=totalused+v;

        if(totalused <= n)
        {
            levels++;
        }
        else{
            break;
        }

    }

    cout << levels << endl;
    return 0;
}
