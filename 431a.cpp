#include<bits/stdc++.h>

using namespace std;

int main()


{
    int a,b,c,d;
    int ans ;
    string s;

    while(cin>>a>>b>>c>>d)
    {
        cin >> s;
        ans = 0;
        for(int i=0; i < s.size();i++)
        {
            if(s[i]=='1')
            {
                ans += a;
            }
            else if (s[i]=='2')
            {
                ans += b;
            }
            else if(s[i]=='3')
            {
                ans += c;
            }
            else if(s[i]=='4')
            {
                ans += d;
            }
        }
        cout << ans << endl;

    }







    return 0;
}
