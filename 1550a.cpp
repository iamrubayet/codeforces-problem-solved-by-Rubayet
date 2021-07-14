#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int x=1;
        long long sum = 0;
        int result = 0;

        while(sum<n)
        {
            sum+=x;
            x+=2;
            result++;
        }
        cout << result << endl;
    }
    return 0;
}
