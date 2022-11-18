#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    ll a,b,n,m;
    cin >> a >> b >> n >> m;
    if(a>b)
    {
        swap(a,b);
    }

    if(a+b<m+n)
    {
        cout << "No" <<endl;
    }
    else if(a<m)
    {
        cout << "No"<<endl;

    }
    else
    {
        cout << "Yes"<<endl;

    }



}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
