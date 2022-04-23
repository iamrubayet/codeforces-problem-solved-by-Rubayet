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
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            sum += x-1;
        }

        if(sum%2==0){
            cout <<"maomao90"<<endl;
        }
        else{
            cout <<"errorgorn"<<endl;
        }
    }
    return 0;
}


