#include<bits/stdc++.h>

using namespace std;

int main()

{

    int t;

    cin>>t;

    while(t--)

    {

        double n,x,v;

        cin>>n>>x;

        if(n==1||n==2)

            cout<<"1"<<endl;

        else

        {

            v=ceil((n-2)/x);

            cout<<v+1<<endl;

        }



    }
    return 0;

}
