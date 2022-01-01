#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    int l;
    int r;
    int left = 0;
    int right = 0;
    int t;
    cin >> n;
    for(int i=0;i<n;i++)
    {
            cin >> l >> r;
            left +=l;
            right +=r;

    }
    t = min(left,n-left) + min(right,n-right);
    cout << t <<endl;
    return 0;
}
