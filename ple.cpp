#include <bits/stdc++.h>
#define newline printf ("\n")
#define space printf (" ")
#define fread(a) freopen (a".in", "r", stdin), freopen (a".out", "w", stdout)
#define cinfalse ios::sync_with-stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)>(b)?(a):(b)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
#define MAXN 1005
#define MAXM 800005
using namespace std;

int n;
int a[MAXN], b[MAXN], c[MAXN];
int p, q;
int f[MAXM][5];
long long ans = 0x3f3f3f3f;
int sumw = 0;
int main()
{
	memset(f, 0, sizeof (f)); 
	scanf ("%d%d", &q, &p);
	scanf ("%d", &n);
	for (rint i = 0; i < n; i ++)
		scanf ("%d%d%d", &a[i], &b[i], &c[i]), sumw += c[i];
	for (rint i = 0; i < n; i ++)
		for (rint j = sumw; j >= c[i]; j --)
			f[j][0] = max(f[j][0], f[j-c[i]][0]+a[i]), f[j][1] = max(f[j][1], f[j-c[i]][1]+b[i]);
	for (rint i = 0; i <= sumw; i ++)
		if (f[i][0] >= q && f[i][1] >= p)
			return printf ("%d", i);
	printf ("No solution!");
	return 0;
}
