#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;
    vector<int> pocket(101);
    while(t--)
    {
        int n;
        cin >> n;
        pocket[n]++;

    }

    cout << *max_element(pocket.begin(),pocket.end())<<endl;
    return 0;
}
