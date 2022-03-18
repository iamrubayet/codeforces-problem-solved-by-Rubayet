#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
     int n;
     cin >> n;
     int a[n];
     for(int i=0;i<n;i++){
        cin >> a[i];
     }

     int j = n-1;
     int i = 0;

     while(j>=0 && a[j]){
        j--;
     }

     while(i<n && a[i]){
        i++;
     }

     if(j<0){
        cout <<0<<endl;
     }
     else{
        cout << j-i+2 <<endl;
     }


    }
    return 0;
}
