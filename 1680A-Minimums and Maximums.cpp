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
        ll l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if(r1>=l2 && r2>=l1){
            cout << max(l1,l2)<<endl;
        }
        else{
            cout << (l1+l2)<<endl;
        }
    }
    return 0;
}

