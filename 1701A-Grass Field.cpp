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
        int a,b,c,d;
        int cnt=0;
        cin >> a >> b >> c >> d;
        if(a>0){
                cnt++;

        }
        if(b>0){
            cnt++;
        }
        if(c>0){
            cnt++;
        }
        if(d>0){
            cnt++;
        }
        if(cnt==0){
            cout << 0 <<endl;
        }
        else if(cnt > 3){
            cout << 2 <<endl;
        }
        else {
            cout << 1 <<endl;
        }
    }
    return 0;
}
