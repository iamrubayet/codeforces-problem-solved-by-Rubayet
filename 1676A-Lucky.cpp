#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib> //the standard C library header
#include <string>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int sum1=0;
        int sum2=0;
        for(int i=5;i>=3;i--){

            sum1+= num%10;
            num = num/10;
        }

        for(int i=2;i>=0;i--){

            sum2 += num%10;
            num = num/10;
        }

        if(sum1==sum2){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }

    }


    return 0;
}

