#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n,k;
    cin >> n >> k;
    int persons;
    int valids=0;

    for(int i=0;i<n;i++)
    {
        cin >> persons;
        if(persons+k <=5)
        {
            valids++;

        }

    }

    cout << valids/3 <<endl;


    return 0;
}
