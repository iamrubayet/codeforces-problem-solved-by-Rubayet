#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string t;
    int result = 1;
    int pos = 0;

    cin >> s >> t;
    for(int i=0;i < t.length();i++)
    {
        if(t[i] == s[pos] )
        {
            pos++;
            result++;
        }
    }
    cout << result << endl;
    return 0;
}
