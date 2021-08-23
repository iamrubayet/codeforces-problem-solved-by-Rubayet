#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int a1,a2,a3;
    int b1,b2,b3;
    int n;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int a = (a1+a2+a3+4)/5;
    int b = (b1+b2+b3+9)/10;

    if(a+b<=n)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }



    return 0;
}
