#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    string t;
    cin >> n;
    cin >> t;
    int index = 0;
    int gap=1;

    while(index < n)
    {
        cout << t[index];
        index+=gap;
        gap++;
    }
    return 0;
}
