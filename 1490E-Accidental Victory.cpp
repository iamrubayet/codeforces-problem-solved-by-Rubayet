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
        int n;
        cin >> n;
        ll arr[n];
        vector<pair<ll,ll>> v;
        ll sum = 0;

        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            v.push_back({arr[i],i+1});
            sum +=arr[i];

        }

        sort(v.begin(),v.end());
        ll c=1;

        for(ll i=n-2;i>=0;i--)
        {
            sum -=v[i+1].first;
            if(sum<v[i+1].first){
                break;
            }
            else {
                c++;
            }
        }

        vector<ll> v1;

        for(ll i=n-1;i>=n-1-c+1;i--)
        {
            v1.push_back(v[i].second);
        }

        sort(v1.begin(),v1.end());

        cout<< v1.size()<<endl;

        for(ll i=0;i<v1.size();i++){
                cout<< v1[i]<<" ";

        }
        cout<<endl;








    }
    return 0;
}
