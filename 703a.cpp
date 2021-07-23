#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int cris=0;
    int mishka=0;
    int m;
    int c;

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> m >> c;

        if(m>c)
        {
            mishka++;

        }
        else if(c>m)
        {
            cris++;
        }

    }

    if(mishka > cris)
    {
        cout << "Mishka"<<endl;
    }
    else if(cris > mishka)
    {
        cout<< "Chris" <<endl;
    }
    else{
        cout<< "Friendship is magic!^^"<<endl;
    }
    return 0;
}
