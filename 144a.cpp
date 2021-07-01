#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;
    int maxvalue=0;
    int minvalue=1000;
    int maxindex=0;
    int minindex=0;
    int n;


    for(int i=0;i<t;i++)
    {
        cin >>n;
        if(n>maxvalue)
        {
            maxvalue=n;
            maxindex=i;
        }
        if(n<=minvalue)
        {
            minvalue=n;
            minindex=i;
        }
    }


    if(maxindex > minindex)
    {
        cout << (maxindex-1)+(t-minindex)-1 << endl;
    }
    else{
        cout << (maxindex-1)+(t-minindex)<<endl;
    }



    return 0;
}
