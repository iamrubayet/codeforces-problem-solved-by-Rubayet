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
        int x;
        cin >> x;
        int flag = 0;

        while(x>0){


        if(x%11==0 || x%111==0)
        {
                flag = 1;
                break;

        }
        x-=111;

        }

        if(flag){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}
