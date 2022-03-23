#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        if(n%3==0 || n%3==2){
            i=2;
            while(n>0){
                cout<<i;
                n=n-i;
                i=3-i;
            }
        }else{
            i=1;
            while(n>0){
                cout<<i;
                n-=i;

                i=3-i;
            }
        }

        cout<<"\n";

    }
}
