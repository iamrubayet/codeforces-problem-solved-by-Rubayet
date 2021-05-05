#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <queue>
using namespace std;
char s1[1005];
char s2[1005];
vector<char> l, r;
int main() {
    int i, j, k;
    while (scanf("%s", s1) != EOF) {
        scanf("%s", s2);
        l.clear();
        r.clear();
        for (i = 0; s1[i] != '|'; ++i)
            l.push_back(s1[i]);
        for (++i; s1[i]; ++i)
            r.push_back(s1[i]);
        for (i = 0; s2[i]; ++i)
            if (l.size() > r.size())
                r.push_back(s2[i]);
            else
                l.push_back(s2[i]);
        if (l.size() != r.size())
            puts("Impossible");
        else {
            for (i = 0; i < l.size(); ++i)
                printf("%c", l[i]);
            printf("|");
            for (i = 0; i < r.size(); ++i)
                printf("%c", r[i]);
            puts("");
        }
    }
}
