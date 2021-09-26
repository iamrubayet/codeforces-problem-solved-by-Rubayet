#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int &x :a)
    {
        cin >> x;
    }

    sort(a.begin(),a.end());

    int result = a[n-1]-a[0];

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            result = min(result,a[j]-a[i]);
        }
    }
    cout << result <<endl;

}


int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}
