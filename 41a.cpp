#include <bits/stdc++.h>
using namespace std;
 
int i;
string a, b;
 
int main() {
  ios_base::sync_with_stdio(0);
 
  cin >> a >> b;
 
  reverse(b.begin(), b.end());
 
  if(a == b) cout << "YES\n";
  else cout << "NO\n";
 
  return 0;
}