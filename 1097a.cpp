#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string s1;
    string s2;
    int match=0;

    cin >> s1;

    for(int i=0;i<5;i++)
    {
        cin >> s2;

        if(s1[0]==s2[0] || s1[1]==s2[1])
        {
            match++;

        }
    }

    if(match > 0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }


    return 0;
}
