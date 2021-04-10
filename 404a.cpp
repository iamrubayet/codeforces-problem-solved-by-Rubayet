#include <cmath>
#include <map>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <bitset>
#include <memory.h>
#include <functional>
#include <queue>
#include <fstream>
#include <ctime>
#include <deque>
#include <utility>
#include <stack>
#include <sstream>
#include <list>
#include <cctype>
#include <numeric>
#include <iomanip>
#include <assert.h>
using namespace std;
#define sqr(_) ((_)*(_))

typedef pair<int, int> Pii;
#define x first
#define y second
#define mp make_pair
#define pb push_back

typedef long long LL;

const int MAXN = 300 + 10;

int n;
char str[MAXN][MAXN], c1, c2;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif

	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%s", str[i] + 1);
	c1 = str[1][1], c2 = str[1][2];
	if (c1 == c2) puts("NO"), exit(0);
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
		{
			if (i == j || n - i + 1 == j)
			{
				if (str[i][j] != c1)
					puts("NO"), exit(0);
			}
			else
			if (str[i][j] != c2)
				puts("NO"), exit(0);
		}
	puts("YES");

	fclose(stdin);
	fclose(stdout);
	return 0;
}
