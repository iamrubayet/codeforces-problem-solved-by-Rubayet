#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t=1;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];

        }
        sort(a,a+n);
        long long blue = a[0]+a[1];
        long long red = a[n-1];
        bool flag = false;
        long long l = 2;
        long long r = n-2;
        while(l<r){
            if(red>blue){
                flag=true;
                break;
            }
            blue+=a[l];
            red +=a[r];
            l++;
            r--;
        }

        if(flag || red>blue ){
            cout << "Yes" <<endl;
        }else{
            cout << "No" <<endl;
        }


    }
    return 0;
}
