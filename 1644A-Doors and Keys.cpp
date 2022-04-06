#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;

        int r = 0, g = 0, b = 0;
        int i, no = 0;

        for(i = 0; i < 6; i++)
        {
            if(s[i] == 'r')
                r++;
            if(s[i] == 'g')
                g++;
            if(s[i] == 'b')
                b++;

            if(s[i] == 'R' && r == 0)
            {
                no++;
            }
            if(s[i] == 'G' && g == 0)
            {
                no++;
            }
            if(s[i] == 'B' && b == 0)
            {
                no++;
            }
        }

        if(no > 0)
            cout<<"NO";
        else
            cout<<"YES";

        cout<<endl;
    }
}
