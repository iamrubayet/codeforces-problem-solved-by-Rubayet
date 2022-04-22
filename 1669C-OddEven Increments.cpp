#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int ee=0,eo=0,oe=0,oo=0;

        for(int i=0;i<n;i++){

            int x;
            cin >>x;
            if(i%2==0){
                    if(x%2==0){
                            ee++;

                    }
                    else{
                        eo++;
                    }

            }
            else{
                if(x%2==0){
                    oe++;
                }
                else{
                    oo++;
                }
            }
        }

        if(ee!=0 && eo!=0){
            cout <<"NO"<<endl;
        }
        else if(oe!=0 && oo!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout << "YES"<<endl;
        }
    }
    return 0;
}


