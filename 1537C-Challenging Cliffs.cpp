#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int x = 0, y = 1;
        int diff = abs(a[y] - a[x]);
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < diff)
            {
                diff = abs(a[i + 1] - a[i]);
                x = i;
                y = i + 1;
            }
        }

        cout << a[x] << " ";
        for (int i = y + 1; i < n; i++)
            cout << a[i] << " ";

        for (int i = 0; i < x; i++)
            cout << a[i] << " ";

        cout << a[y] << "\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
