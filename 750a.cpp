#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n,k;
    cin >> n >> k;

    int contestTime=240-k;

    int solvedProblems = 0;
    int solvedTimes=0;

    for(int i=1;i<=n;i++)
    {
        solvedTimes += i*5;

        if( solvedTimes <= contestTime)
        {
            solvedProblems++;
        }
        else
        {
            break;
        }
    }

    cout << solvedProblems << endl;
    return 0;
}
