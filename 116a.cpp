#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main()
{
    int total=0;
    int maxtotal=0;

    int t;
    cin >> t;
    int exited = 0;
    int entered = 0;

    while(t--)
    {
        cin >> exited >> entered;

        total = total+entered-exited;
        maxtotal = max(total,maxtotal);
        //cout << maxtotal << endl;//


    }

    cout << maxtotal << endl;


    return 0;
}
