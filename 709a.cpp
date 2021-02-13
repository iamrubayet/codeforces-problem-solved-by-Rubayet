#include <iostream>

using namespace std;

int main()
{
    int n;
    int b;
    int d;
    int x;
    int sum =0;
    int dtimes = 0;
    cin >> n >> b >> d;
    for(int i=0;i <n ;i++)
    {
        cin >> x;


    if(x <= b)
    {
        sum += x;

    }
    if(sum > d)
    {
        dtimes += 1;
        sum =0;

    }
    }
    cout << dtimes << endl;
    return 0;
}
