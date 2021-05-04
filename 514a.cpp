#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string s;

    cin >> s;

    bool flag = false;

    for( char &c : s)
    {
        if( (flag && c=='9') || (c>='5' && c<='8'))
        {
            c = '9'- c + '0';

        }
        flag = true;
    }
    cout << s << endl;



    return 0;
}
