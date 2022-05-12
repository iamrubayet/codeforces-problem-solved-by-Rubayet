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
        ll a[n+1];

        for(int i=1;i<n+1;i++){
                cin >> a[i];

        }
        int ans = 0;

        for(int i=1;i<=n;i++){
            for(int j=a[i]-i;j<=n;j+=a[i]){
                if(j>=0){
                        if(a[i]*a[j]==i+j && i > j){
                            ans++;
                        }

                }
            }
        }

        cout << ans <<endl;
    }
    return 0;
}

