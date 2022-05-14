#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solved() {
    ll n;
    cin >> n;
    if(n%2==1 || n<4){
        cout << "-1"<<endl;
        return;
    }
    else{
        long long maxi = n/4;
        long long mini = n/6 + (bool)(n%6);
        cout << mini << " " << maxi <<endl;
    }


}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solved();
  }
}

