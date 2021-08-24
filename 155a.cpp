#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    int points;
    cin >> n >> points;

    int mini = points;
    int maxi = points;
    int amazing = 0;

    for(int i=1;i<n;i++)
    {
        cin >> points;
        if(maxi > points)
        {
            maxi = points;
            amazing++ ;
        }

        else if(mini < points)
        {
            mini = points;
            amazing++;

        }
    }

    cout << amazing <<endl;
    return 0;
}
