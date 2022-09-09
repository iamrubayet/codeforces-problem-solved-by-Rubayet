#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n+2);
        int flag = 0;
        long long int sum = 0;
        for(int i=0;i<n+2;i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        int f=-1;
        sort(v.begin(),v.end());

        long long int m  = v[n+1];
        sum = sum - v[n+1];

        for(int i=0;i<n+1;i++)
        {
            if(sum-v[i]==m)
            {
                f = i;
                break;
            }

        }
        if(f!=-1)
        {
            flag = 1;
            for(int i=0;i<n+1;i++)
            {
                if(i==f)
                {
                    continue;
                }
            else
            {
                cout << v[i]<< " ";

            }

            }
            cout <<endl;
            continue;

        }
        else
        {
            //sum = sum - v[n];
            long long int s =0;
            for(int i=0;i<n;i++)
            {
                s = s+v[i];

            }
            if(s==v[n])
            {
                flag = 1;
                for(int i=0;i<n;i++)
                {
                    cout << v[i] << " ";

                }
                cout <<endl;
            }


        }

        if(flag==0){
            cout << -1 <<endl;
        }







    }
    return 0;
}
