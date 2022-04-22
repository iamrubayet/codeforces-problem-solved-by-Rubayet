#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int ans = -1;
        map<int,int> mp;
        for(int i=0;i<n;i++){
                int x;
                cin >> x;
                mp[x]++;
                if(mp[x]>=3){
                    ans = x;
                }

        }
        cout << ans <<endl;
    }
    return 0;
}
