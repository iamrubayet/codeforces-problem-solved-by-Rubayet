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
        ll n;
        cin >> n;
        ll a[n];
        unordered_map<ll,ll> mp;
        ll ans = 0;

        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]-(i+1)]++;
        }

        for(auto it : mp){
            ll z = it.second;
            ans += z*(z-1)/2;
        }

        cout << ans <<endl;

    }
    return 0;
}
