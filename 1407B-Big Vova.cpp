#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

//solution 2

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n),vis(n);

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int d = 0;


    for(int i=0;i<n;i++)
    {
        int index = 0;
        int maxigcd = 0;

        for(int j=0;j<n;j++)
        {
            if(!vis[j] && __gcd(d,a[j])>maxigcd)
            {
                maxigcd = __gcd(d,a[j]);
                index = j;

            }
        }
        d = maxigcd;
        vis[index]=1;
        b[i]=a[index];

    }

    for(auto i:b)
    {
        cout << i << " ";
    }
    cout <<endl;




}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

