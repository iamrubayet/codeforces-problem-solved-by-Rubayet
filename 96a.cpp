#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string s;
    cin >> s;

    int danger = 1;

    for(int i=0;i < s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            danger++;
            if(danger==7)
            {
                cout << "YES" <<endl;
                return 0;
            }
        }
        else
        {
            danger = 1;
        }
    }
    cout << "NO" <<endl;


    return 0;
}
