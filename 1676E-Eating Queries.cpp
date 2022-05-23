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
        int q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end(),greater<ll>());

        vector<ll> pref(n,0);

        pref[0]=a[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+a[i];
        }

        while(q--){
            ll x;
            cin >> x;
            if(x>pref[n-1]){
                cout << -1 <<endl;
                continue;
            }

            int low = 0;
            int high = n-1;
            int index =1;

            while(low<=high){
                int mid = low+(high-low)/2;
                if(pref[mid]>=x){
                    index = mid;
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            cout << index+1 <<endl;
        }
    }
    return 0;
}

