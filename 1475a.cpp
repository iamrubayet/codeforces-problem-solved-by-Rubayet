#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;

  if(n&(n-1))
  {
      cout << "YES"<<endl;
  }
  else
  {
      cout << "NO"<<endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
