#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<char> sum;
    //vector<string> new_sum;//
    cin >> s;

    for(int i=0;i < s.size();i++)
    {
        if(s[i]!='+')
        {
            sum.push_back(s[i]);
        }
    }
    sort(sum.begin(),sum.end());

    cout << sum[0];

    for(int i=1 ;i < sum.size();i++)
    {
        cout << "+" << sum[i];
    }

    return 0;
}
