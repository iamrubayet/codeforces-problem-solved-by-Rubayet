#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long ans,e,n,s,i,l,r;
     cin>>e;
     while(e--)
     {
        cin>>n>>l>>r;
        vector<long long>a(n);
        for(i=0;i<n;i++)
        cin>>a[i];

        sort(a.begin(),a.end());
        ans=0;
        for(i=0;i<n-1;i++)
        {
             auto itr1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
             auto itr2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
             ans+=(itr2-itr1);
        }
        cout<<ans<<"\n";
     }
}
