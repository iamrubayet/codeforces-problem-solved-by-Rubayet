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
        int a[n+4];
        vector<int> v;

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        if(n%2==1){
            cout << "NO"<<endl;
            continue;
        }

        sort(a,a+n);

        for(int i=0,j=n/2;i<n/2;i++,j++)
        {
            v.push_back(a[i]);
            v.push_back(a[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);

        int ans = 0;

        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                continue;
            }
            else if(v[i]<v[i-1] && v[i]<v[i+1])
            {
                continue;
            }
            else
            {
                ans = 1;
                break;
            }
        }

        if(ans==1){
            cout<<"NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout << v[i]<<" ";
            }
            cout <<endl;
        }






    }
    return 0;
}
