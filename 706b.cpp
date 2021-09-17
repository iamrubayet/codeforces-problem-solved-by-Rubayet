#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n,m,q,ans;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    cin >> m;

    while(m--)
    {
        cin >> q;
        ans =  upper_bound(arr,arr+n,q)-arr;
        cout <<ans<<endl;
    }


    return 0;
}


