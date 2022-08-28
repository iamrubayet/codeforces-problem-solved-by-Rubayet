#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int sa,ta,x,y,d;
        cin >> sa>>ta>>x>>y>>d;
       if((y-d>1 && x+d<sa) ||((x-d)>1 && y+d<ta)){
           cout << (sa+ta-2) << endl;
       }
       else{
           cout << -1 <<endl;
       }
    }
    return 0;
}

