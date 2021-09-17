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
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int mna = *min_element(a.begin(),a.end());
        int mnb = *min_element(b.begin(),b.end());
        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            ans+=max(a[i]-mna,b[i]-mnb);
        }
        cout << ans <<endl;

    }

    return 0;
}
