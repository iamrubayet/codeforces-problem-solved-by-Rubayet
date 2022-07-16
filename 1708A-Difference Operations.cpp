#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++){
            cin >> a[i];

    }
    ll ok = 1;

    for(int i=0;i<n;i++){
            if(a[i]%a[0]!=0){
                ok = 0;
            }

    }
    if(ok==0){
        cout << "No"<<endl;
    }
    else{
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
