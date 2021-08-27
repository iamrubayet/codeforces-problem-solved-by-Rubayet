#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string answer;
        for(int i=0;i<s.size();i+=2)
        {
            answer+=s[i];
        }
        cout << answer <<endl;
    }
    return 0;
}
