#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>19){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int f = 1;
            cout << f <<" ";
            while(--n)
            {
                f=f*3;
                cout<<f<<" ";


            }
            cout<<endl;
        }
    }
    return 0;
}
