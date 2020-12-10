#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main()
{
    char s[101];

    cin >> s;

    int l = strlen(s);

    sort(s,s+l);
    int counter = 0;

    for(int i=0;i <l ;i++)
    {

        if(s[i] != s[i+1])
        {
            counter++;
        }
    }

    if(counter % 2==0)
    {
        cout << "CHAT WITH HER!" << endl;


    }
    else{
        cout << "IGNORE HIM!"<< endl;
    }



    return 0;
}
