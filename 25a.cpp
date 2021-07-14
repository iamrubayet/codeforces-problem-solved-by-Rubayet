#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    int evennes=0;
    int oddness =0;
    int x;
    int y;
    int a[101];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evennes++;
            x=i+1;
        }
        else{
            oddness++;
            y=i+1;
        }
    }

    if(evennes==1)
    {
        cout << x << endl;
    }
    else if(oddness==1)
    {
        cout << y << endl;

    }
    return 0;
}
