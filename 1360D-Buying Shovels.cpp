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
        ll ans = n;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i<=k)
                {
                    ans = min(ans,n/i);
                }
                if(n/i<=k)
                {
                    ans = min(ans,i);
                }
            }

        }
        cout << ans <<endl;


    }
    return 0;
}
