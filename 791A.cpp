#include <iostream>

using namespace std;

int main()
{
    int limak;
    int bob;
    int year = 0;

    cin >> limak >> bob;

    while(limak <= bob)
    {
        year++;
        bob = bob*2;
        limak = limak*3;



    }
    cout << year << endl;
    return 0;
}
