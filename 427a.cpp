#include <iostream>

using namespace std;


int main()
{
    int cureoff = 0;
    int untreated = 0;

    int n ;
    cin >> n;



    for(int i=0; i < n ;i++)
    {
        int x ;
        cin >> x;
        if(x > 0)
        {
            cureoff += x;
        }

        else
        {
           if(cureoff < 1)
           {
               untreated++;
           }
           else
           {
               --cureoff;

           }
        }



    }
    cout << untreated << endl;
    return 0;
}
