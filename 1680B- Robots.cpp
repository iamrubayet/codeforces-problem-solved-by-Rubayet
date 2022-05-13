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
        ll n,m;
        cin >> n >> m;
        string s[n];

        for(int i=0;i<n;i++){
            cin >> s[i];
        }

        bool robot = false;
        bool no = false;
        ll l;
        ll r;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!robot && s[i][j]=='R'){
                        l = i;
                        r = j;
                        robot = true;

                }
                if(robot && s[i][j]=='R'){
                    if(i<l || j< r){
                        no = true;
                        break;
                    }
                }
            }


        }

        if(no){
                cout << "NO";
            }
            else{
                cout << "YES";
            }
            cout <<endl;
    }
    return 0;
}
