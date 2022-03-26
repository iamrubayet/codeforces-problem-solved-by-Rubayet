#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t=1;
    cin >> t;

    while(t--){
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
                mp[s[i]]++;

        }
        int i=0;

        for(;i<s.size();i++){
            if(mp[s[i]]<=1){
                break;
            }
            mp[s[i]]--;
        }

        for(;i<s.size();i++){
            cout<<s[i];
        }

        cout<<endl;
    }
    return 0;
}
