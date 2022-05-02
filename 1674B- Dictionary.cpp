#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t=1;
    cin >> t;

    unordered_map<string,int> mp;
     int cnt=1;
    for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
            if(c1==c2){
                continue;
            }
            string temp;
            temp +=c1;
            temp += c2;
            mp[temp]=cnt;
            cnt++;
        }
    }

    while(t--){
        string s;
        cin >> s;
        cout <<mp[s]<<endl;

    }
    return 0;
}

