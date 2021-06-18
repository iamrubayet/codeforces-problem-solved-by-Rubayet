#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    vector<int> mas(3);

    for(int i=0;i<3;i++)
    {
        cin >> mas[i];
    }

    sort(mas.begin(),mas.end());

    cout << mas[2]-mas[0] << endl;
    return 0;
}
