#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{

    string a,b,c,s;
    cin >> a >> b >> c;

    s= a+b;

    sort(s.begin(),s.end());
    sort(c.begin(),c.end());

    if(c==s)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<< endl;

    }
    return 0;
}
