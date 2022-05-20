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
        string s;
        cin >> s;
        ll seize = s.size();
        if(seize<=2){
            cout << s[seize-1] <<endl;
        }
        else{
            cout << *min_element(s.begin(),s.end()) <<endl;;
        }
    }
    return 0;
}


