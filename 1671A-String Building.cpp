#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        int ans =0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[i+1] && s[i]!=s[i-1]){
                    ans = 1;

            }
        }

        if(ans == 0){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}
