#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l;
        int r;

        cin >> l >> r;

        int answer =0;

        while(l!=0 || r!= 0)
        {
            answer += r-l;
            l/=10;
            r/=10;


        }

        cout << answer << endl;




    }
    return 0;
}
