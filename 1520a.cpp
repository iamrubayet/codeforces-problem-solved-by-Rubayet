#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(26,0);
    a[s[0]-'A']=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) continue;
        else{
            if(a[s[i]-'A']>0){
                cout<<"NO"<<"\n";
                return;
            }
            a[s[i]-'A']=1;
        }
    }
    cout<<"YES"<<"\n";
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
