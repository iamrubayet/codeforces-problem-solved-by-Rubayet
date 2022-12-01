#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int N = 2e5 + 5;

int deg[N];

void solve()
{
    memset(deg,0,sizeof(deg));
    ll n,x;
    cin >> n >> x;

    for(int i=0;i<n-1;i++)
    {
        ll u,v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }
    if(deg[x]<=1)
    {
        cout << "Ayush" <<endl;
    }
    else
    {
        if(n%2)
        {
            cout << "Ashish" <<endl;
        }
        else
        {
            cout << "Ayush" <<endl;
        }

    }


}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
