#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    double a = sqrt((x*y)/z);
    double b = sqrt((x*z)/y);
    double c = sqrt((z*y)/x);
    double value = (a+b+c)*4;
    cout << value <<endl;
    return 0;
}
