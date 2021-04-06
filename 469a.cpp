#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    set<int> game;
    int n;
    while(cin >>n )
    {
        int t,temp;

        cin >> t;
        for(int i=0;i<t;i++)
        {
            cin >> temp;
            game.insert(temp);
        }
        cin >> t;
        for(int i=0;i<t;i++)
        {
            cin >> temp;
            game.insert(temp);
        }

        if(game.size()==n)
        {
            cout <<"I become the guy."<<endl;
        }
        else
        {
            cout <<"Oh, my keyboard!" <<endl;

        }
    }
    return 0;
}
