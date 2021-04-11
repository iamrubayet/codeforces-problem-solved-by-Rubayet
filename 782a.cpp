#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >>n;
    int arr[4]={6,8,4,2};
    if(n==0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << arr[n%4] << endl;
    }
    return 0;
}
