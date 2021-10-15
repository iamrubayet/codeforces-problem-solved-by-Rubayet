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
        cin >> n;
        vector<int> cnt(26);

        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            for(char ch:s)
            {
                ++cnt[ch-'a'];

            }

        }
        bool ans = true;

        for(int i=0;i<26;i++)
        {
            if(cnt[i]%n !=0)
            {
                ans = false;
                break;


            }
        }

        cout << (ans ? "Yes":"No") <<endl;
    }
    return 0;
}
