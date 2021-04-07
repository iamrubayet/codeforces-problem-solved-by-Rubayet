#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n,m;
	scanf("%d%d", &n, &m);
	bool color = 0;
	for(int i = 1;i <= n;i ++)
		for(int j = 1;j <= m;j ++)
		{
			char c;
			while (c = getchar(),c < 'A' || c > 'Z');
			if (c == 'C' || c == 'Y' || c == 'M') color = 1;
		}
	if (color) printf("#Color\n"); else
		printf("#Black&White\n");
}
