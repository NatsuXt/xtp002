#include <bits/stdc++.h>
#define newline printf ("\n")
#define space printf (" ")
#define fread(a) freopen (a".in", "r", stdin), freopen (a".out", "w", stdout)
#define cinfalse ios::sync_with-stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)>(b)?(a):(b)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
#define MAXN 32005
using namespace std;

int n, m;
int value[MAXN][5], price[MAXN][5];
long long f[MAXN];

#define c1(v, a, b) value[v][a]+value[v][b]
#define c2(v, a, b, c) value[v][a]+value[v][b]+value[v][c]
#define c0(v, a) value[v][a]*price[v][a]

int main()
{
	fread("budget");
	scanf ("%d%d", &n, &m);
	for (rint i = 1; i <= m; i ++)
	{
		rint v, p, q;
		scanf ("%d%d%d", &v, &p, &q);
		if (q == 0)
			value[i][0] = v, price[i][0] = p;
		else
			if (value[q][1] == 0)
				value[q][1] = v, price[q][1] = p;
			else
				value[q][2] = v, price[q][2] = p;
	}
	for (rint i = 1; i <= m; i ++)
		for (rint j = n; j >= 0; j --)
		{
			if (j >= value[i][0])
				f[j] = max (f[j], f[j-value[i][0]]+c0(i, 0));
			if (j >= c1 (i, 0, 1))
				f[j] = max (f[j], f[j-c1 (i, 0, 1)]+c0(i, 0)+c0(i, 1));
			if (j >= c1 (i, 0, 2))
				f[j] = max (f[j], f[j-c1 (i, 0, 2)]+c0(i, 0)+c0(i, 2));
			if (j >= c2 (i, 0, 1, 2))
				f[j] = max (f[j], f[j-c2 (i, 0, 1, 2)]+c0(i, 0)+c0(i, 1)+c0(i, 2));
		}
	printf ("%d", f[n]);
	return 0;
}
