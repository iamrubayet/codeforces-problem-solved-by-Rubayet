#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    map<string,int> mp;
    while(n--)
    {
        string s;

        cin >> s;
        mp[s]++;

    }

    string s = "foo";

    for(map<string, int>::iterator it = mp.begin();it !=mp.end();it++)
    {
        if(it->second > mp[s])
        {
            s = it->first;
        }
    }

    cout << s <<endl;
    return 0;
}
