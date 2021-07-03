#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;




    for(int i=0;i<t;i++)
    {
        int n;
        int s=0;
        int result=0;


        cin >>n;

        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s += a[i];


        }

        if (s%n!=0)
        {
            cout << "-1" << endl;
        }
        else
        {
            s/=n;





        for(int i=0;i <n;i++)
        {
            if(a[i] > s)
            {
                result++;
            }
        }

        cout << result << endl;
        }
    }
    return 0;
}
