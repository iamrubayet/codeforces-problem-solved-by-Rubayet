#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool exist[11];

bool f(int x,int k)
{
    memset(exist,0,sizeof(exist));
    while(x)
    {
        exist[x%10]=true;
        x/=10;
    }
    for(int i=0;i<=k;i++)
    {
        if(!exist[i])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int n,k,r,x;
    r=0;
    cin >> n >> k;
    while(n--)
    {
        cin >>x;
        if(f(x,k))
        {
            r++;
        }
    }
    cout << r << endl;
    return 0;

}
