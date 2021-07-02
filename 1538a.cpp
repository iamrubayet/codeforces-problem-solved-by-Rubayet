#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n;
        cin >> n;
        int a[n];
        int ma=INT_MIN;
        int mi=INT_MAX;

        for(int i=0;i <n;i++)
        {
            cin >> a[i];
            ma= max(ma,a[i]);
            mi = min(mi,a[i]);

        }


        int lma,lmi;

        for(int i=0;i<n;i++)
        {
            if(a[i]==ma)
            {
                lma= i+1;
            }
            if(a[i]==mi)
            {
                lmi= i+1;
            }
        }

        int rma,rmi;

        rma = n-lma+1;
        rmi = n-lmi+1;

        int ans1 = max(rma,rmi);
        int ans2 = max(lma,lmi);

        int ans3 = min(lma+rmi,rma+lmi);

        cout << min(ans1,min(ans2,ans3))<<endl;
    }


    return 0;
}
