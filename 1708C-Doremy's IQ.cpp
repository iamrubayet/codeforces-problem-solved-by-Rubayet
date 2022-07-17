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
        int n,q;
        cin >> n >> q;
        ll a[n];
        ll b[n];
        ll q1 = 0;

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=n-1;i>=0;i--){
            if(a[i]<=q1){
                    b[i]=1;

            }
            else{
                if(q1<q){
                        q1++;
                        b[i]=1;

                }
                else{
                    b[i]=0;
                }
            }
        }

        for(int i=0;i<n;i++){
            cout << b[i]<< "";
        }
        cout <<endl;






    }
    return 0;
}
