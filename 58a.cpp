#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string s;

    cin >> s;

    int j=0;

    int cnt=0;

    string b="hello";


    for(int i=0;i<s.size();i++)
    {
        if(s[i]==b[j])
        {
            cnt++;
            j++;

            if(cnt==5)
            {
                break;

            }

        }

    }

    if(cnt==5)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
