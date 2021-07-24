#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >>t;
    int n;

    while(t--)
    {
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        bool ok = true;

        for(int i=1;i<n;i++)
        {
            ok &= (v[i]-v[i-1]<=1);
        }

        if(ok)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }



    }
    return 0;
}
