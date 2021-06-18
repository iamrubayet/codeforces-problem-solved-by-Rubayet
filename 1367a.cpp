#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    string result=" ";
    int t;

    cin >>t;

    string s;

    while(t--)
    {
        cin >> s;

        result+=(s[0]);

        int i=1;

        while(i < s.size())
        {
            if(s[i]==s[i+1])
            {
                result+=s[i];
                i = i+2;
            }
            else{
                result+=s[i];
                i++;
            }


        }
        cout << result <<endl;
        result = " ";

    }


    return 0;
}
