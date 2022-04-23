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
        int n = s.length();
        int a =0;
        int b =0;
        bool ans = true;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                b++;
            }
            else{
                a++;
            }

            if(b>a){
                ans =  false;
            }
        }

        if(s.back()!='B'){
                ans = false;

        }

        if(ans==true){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }

    }


    return 0;
}
