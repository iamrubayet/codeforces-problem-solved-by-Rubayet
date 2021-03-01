#include <iostream>


using namespace std;
typedef long long ll;
const int M=2e5+5;

int a[M];

int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int m1=n/k;
    if (n% k != 0) m1 ++; // if some worse, you need to do after the k 1 pot
    m1*=t;
    if(d+t<m1)
        {
            cout << "YES" << endl;
         }
    else
    {
      cout << "NO" << endl;


    }
    return 0;

}
