#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t=1;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y%x==0){
             cout << "1" << " " << y/x <<endl;
        }
        else{
                cout << "0 0"<<endl;

        }
    }
    return 0;
}
