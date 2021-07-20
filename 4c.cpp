#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;

    string s;

    map<string,int> db;

    while(t--)
    {

        cin >> s;

        if(db.count(s)==0)
        {
            cout << "OK" <<endl;
            db[s]=1;

        }
        else
        {
            cout<<s<<db[s]<<endl;
            db[s]+=1;
        }

    }
    return 0;
}
