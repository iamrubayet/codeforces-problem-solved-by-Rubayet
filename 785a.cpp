#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
            ans+=4;
        if(s=="Cube")
            ans+=6;
        if(s=="Octahedron")
            ans+=8;
        if(s=="Dodecahedron")
            ans+=12;
        if(s=="Icosahedron")
            ans+=20;
    }
    cout<<ans<<endl;
}