#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    ll n;
    cin >> n;
    if(n%2==0){
        cout << "0 0 "<<n/2 <<endl;
    }
    else{
        cout << "-1"<<endl;
    }

}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
