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
        cout <<((1<<n)-1)<<endl;
    }
    return 0;
}
