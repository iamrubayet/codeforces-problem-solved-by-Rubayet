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
        set<int> saw;
        ll summ=0;
        for(int i=0;i<n;i++){
            ll x;
            cin >> x;
            saw.insert(x);
            summ+=x;

        }
        ll div = summ/n;

        if((saw.find(div)!=saw.end()) && div*n == summ){
            cout << "Yes"<<endl;
        }
        else{
            cout << "No" <<endl;
            }
    }
    return 0;
}
