#include <bits/stdc++.h>
#define newline printf ("\n")
#define space printf (" ")
#define fread(a) freopen (a".in", "r", stdin), freopen (a".out", "w", stdout)
#define cinfalse ios::sync_with-stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)>(b)?(a):(b)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
#define MAXV 505
#define MAXN 2005
using namespace std;

long long f[MAXN];
int n, v;
int a[MAXN], b[MAXN], c[MAXN];
long long ans = 0;
int main()
{
	fread("hallows");
	memset (f, 0, sizeof (f));
	scanf ("%d%d", &n, &v);
	for (rint i = 0; i < n; i ++)
		scanf ("%d%d%d", &a[i], &b[i], &c[i]);
	for (rint i = 0; i < n; i ++)
		for (rint j = v; j >= 0; j --)
			if (j+a[i]*b[i] > v)//塞不下
				for (rint k = j; k <= v-b[i]; k ++)
					f[k+b[i]] = max(f[k+b[i]], f[k]+c[i]);
			else
				for (rint k = 1; k <= a[i]; k ++)
					f[j+b[i]*k] = max(f[j+b[i]*k], f[j]+c[i]*k);
	for (rint i = 0; i <= v; i ++)
		ans = max(ans, f[i]);
	printf ("%lld", ans);
	return 0;
}
