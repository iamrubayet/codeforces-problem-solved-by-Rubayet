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

        int n,flag=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int maxi1= *max_element(a,a+n);
        int maxi2= *max_element(b,b+n);

        if(maxi2>maxi1){
            cout << "NO" <<endl;
        }
        else{
            int rem = maxi1-maxi2;
            for(int i=0;i<n;i++){
                if(a[i]-b[i]==rem) continue;
                if(a[i]-b[i]!=rem && b[i]!=0) flag=1;
                else{
                    if(b[i]==0 && a[i]-b[i]<=rem) continue;
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0) {
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
        }

        }

    return 0;
}









