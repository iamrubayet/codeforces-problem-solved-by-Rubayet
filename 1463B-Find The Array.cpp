#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll even = 0;
    ll odd = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a[i]=x;
        if(i%2==0)
        {
            even+=x;
        }
        else {
            odd+=x;
        }
    }

    if(odd>even)
    {
        for(int i=0;i<n;i+=2)
        {
            a[i]=1;

        }
    }
    else
    {
        for(int i=1;i<n;i+=2)
        {
            a[i]=1;
        }
    }

    for(int i:a)
    {
        cout << i << " ";
    }
    cout <<endl;

}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
