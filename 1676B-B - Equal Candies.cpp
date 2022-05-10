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
        ll total = 0;
        vector<ll> candies(n);
        for(int i=0;i<n;i++){
            cin >> candies[i];

        }

        sort(candies.begin(),candies.end());
        int mini = candies[0];

        for(int i=1;i<n;i++){
            total += abs(candies[i]-mini);
        }

        cout << total <<endl;


    }
    return 0;
}

