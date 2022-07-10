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
        int m;
        cin >> m;
        ll x=1;
        ll ans;
        ans = m-x;
        while(x<=m){
            ans = min(ans,m-x);
            x=x*10;
        }
        cout << ans <<endl;
    }
    return 0;
}
