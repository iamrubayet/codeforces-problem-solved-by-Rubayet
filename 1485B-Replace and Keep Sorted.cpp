#include<set>
#include <vector>
#include<iostream>
#include<algorithm>
#include<cmath> //ceil
#include<queue>
#include<cstdlib> // abs
#include<map>
#include<cstring>
#include <string>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int INF = 987654321;
const int dx[] = {1,0,-1,0}, dy[] = {0,-1,0,1};
const int adx[] = {1,0}, ady[] = {0,1};
using ll = int64_t;
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,q,k;
    cin>>n>>q>>k;
    vector<int> a(n);
    for(auto &x : a)cin>>x;
    vector<int> dis(n);
    for(int i=0;i<n;i++){
        if(i==0){
            if(n!=1){
                dis[i]=a[1]-2;
            }
        }
        if(i!=0&&i!=n-1){
            dis[i]=a[i+1]-a[i-1]-2;
        }
    }
    int dissum[n];
    dissum[0]=0;
    for(int i=1;i<n-1;i++){
        dissum[i]=dissum[i-1]+dis[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        if(l==r)cout<<k-1<<'\n';
        else{
            ll ans=a[l+1]-2+k-a[r-1]-1;
            ans += dissum[r-1]-dissum[l];
            cout<<ans<<'\n';
        }
    }
    return 0;

}
