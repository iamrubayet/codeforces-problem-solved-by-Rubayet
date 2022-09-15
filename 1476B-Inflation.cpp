#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }

        ll left = 0;
        ll right = 1e14;

        while(left<right)
        {
            ll mid = (left+right)/2;
            ll sum = v[0]+mid;
            bool ok = true;
            for(int i=1;i<n;i++)
            {
                ll x =  sum*k/100;
                if(v[i]> x)
                {
                    ok = false;
                    break;
                }
                sum +=v[i];
            }
            if(ok)
            {
                right = mid;
            }
            else
            {
                left = mid+1;
            }


        }
        cout << left <<endl;
    }
    return 0;
}
