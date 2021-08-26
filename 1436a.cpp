#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;


    while(t--)
    {
        int s=0;
        int n,m;
        cin >> n >> m;

        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            s+=x;
        }
        if(s==m)
        {
            cout<< "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }

    }
    return 0;
}
