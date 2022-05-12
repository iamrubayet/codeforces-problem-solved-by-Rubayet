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
        int n;
        cin >> n;
        ll a[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<0){
               cnt++;

            }
            a[i]=abs(a[i]);
        }

        for(int i=0;i<n;i++){
            if(cnt==0){
                break;
            }
            cnt--;
            a[i]=-a[i];
        }

        int flag = 0;

        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                flag = 1;
                break;
            }
        }

        if(flag==0){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}
