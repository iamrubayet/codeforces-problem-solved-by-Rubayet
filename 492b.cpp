#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>
using namespace std;
#define int int64_t
int32_t main()
{
    int n,l;cin>>n>>l;
    double ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    double ans=0;
    ans=max(ans,ar[0]);
    ans=max(ans,l-ar[n-1]);
    for(int i=0;i<n-1;i++)
    {
        double dis=ar[i+1]-ar[i];
        dis/=(2.00);
        ans=max(ans,dis);
    }
    cout<<fixed<<setprecision(9)<<ans<<"\n";
    return 0;
}
