#include <bits/stdc++.h>
using ll = long long;
using ld = long double;

using namespace std;


void code() {
  ll n,m;
  cin>>n>>m;
  if(n==1 and m==1)
{
  cout<<"0"<<endl;
}
else {
   cout<<n+m+min(n,m)-2 <<endl;

}
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    code();
  }
  return 0;
}
