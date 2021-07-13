#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string s;
    cin >> s;
    int l=0;

    for(int i=1;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            l++;
        }


    }

    if(l==s.size()-1)
    {
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
            else if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }

        }

    }

    cout << s << endl;
    return 0;
}

