#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
    int result=0;
    int mas[5];
    for(int i=0;i<4;i++)
    {
        cin >> mas[i];

    }
    sort(mas,mas+4);
    for(int i=0;i<3;i++)
    {
        if(mas[i]== mas[i+1])
        {
            result++;
        }

    }
    cout << result << endl;
    return 0;
}
