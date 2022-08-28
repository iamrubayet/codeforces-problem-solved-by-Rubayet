#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        set<char> s;
        char a,b,c,d;
        cin >> a >> b;
        cin >> c >> d;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        cout << s.size()-1<<endl;

    }
    return 0;
}

