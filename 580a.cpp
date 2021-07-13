#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    int a[100005];
    cin >> n;
    int temp=1;
    int maxtemp=1;

    for(int i=0;i <n;i++)
    {
        cin >> a[i];
    }


    for(int j=1;j<n;j++)
    {
        if(a[j]>=a[j-1])
        {
            temp++;
            maxtemp=max(maxtemp,temp);
        }
        else
        {
            temp=1;
        }
    }

    cout << maxtemp << endl;
    return 0;
}
