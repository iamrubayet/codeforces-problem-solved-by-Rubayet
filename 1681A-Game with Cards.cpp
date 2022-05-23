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
        vector<int> alice(n);
        for(int i=0;i<n;i++){
                cin >> alice[i];

        }

        int m;
        cin >> m;
        vector<int> bob(m);
        for(int i=0;i<m;i++){
            cin >> bob[i];
        }

        int maxa = *max_element(alice.begin(),alice.end());
        int maxb = *max_element(bob.begin(),bob.end());

        if(maxa > maxb){
            cout << "Alice" <<endl;
            cout << "Alice" << endl;
        }
        else if(maxa == maxb){
            cout << "Alice"<<endl;
            cout << "Bob" <<endl;
        }
        else {
            cout << "Bob"<<endl;
            cout << "Bob"<<endl;
        }
    }
    return 0;
}
