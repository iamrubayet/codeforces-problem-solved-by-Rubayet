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
        set<char> diff;
        for(auto i: s){
            diff.insert(i);
        }

        int okay = true;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]!=s[i%(int)diff.size()]){
                okay = false;
            }
        }

        if(okay){
            cout << "Yes"<<endl;
        }
        else{
            cout << "No"<<endl;
        }
    }
    return 0;
}
