#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int tt;
    cin >> tt;
    for(int i=0;i<tt;i++){
        string s;
        string c;
        cin >> s >> c;
        bool yes = false;
        for(int j=0;j<s.length();j++){
                if(s[j]==c[0] && j%2==0){
                    yes = true;
                }

        }
        cout << (yes ? "YES":"NO") <<endl;
    }
    return 0;
}

