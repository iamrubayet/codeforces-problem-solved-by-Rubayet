#include <iostream>


using namespace std;

string s;
bool have[26];
int n;


int main()
{
    cin >> n >> s;
    for(int i=0;i<n;i++)
    {
        have[tolower(s[i])-'a']=1;
    }

    for(int i=0;i<26;i++)
    {
        if(!have[i])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
