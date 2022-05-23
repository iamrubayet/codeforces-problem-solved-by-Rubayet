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
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int m;
        cin >> m;
        vector<ll> b(m);
        ll sum = 0;
        for(int i=0;i<m;i++){
            cin >> b[i];
            sum+=b[i];
        }

        cout << a[sum%n]<<endl;
    }
    return 0;
}
