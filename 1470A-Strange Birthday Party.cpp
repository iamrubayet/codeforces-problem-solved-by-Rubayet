#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
 
 
using namespace std;
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> k(n);
        vector<int> c(m);
        for(int i=0;i<n;i++)
        {
            cin >> k[i];
        }
 
        for(int i=0;i<m;i++)
        {
            cin >> c[i];
        }
 
        int j =0;
        ll total  =0;
        sort(k.begin(),k.end(),greater<>());
 
        for(int i=0;i<n;i++)
        {
            if(j<m)
            {
                if(c[j]<c[k[i]-1])
                {
                    total+=c[j];
                    j++;
                }
                else {
                    total+= c[k[i]-1];
 
                }
            }
            else {
                total+=c[k[i]-1];
            }
 
        }
        cout << total <<endl;
 
 
 
 
 
 
 
    }
    return 0;
}
