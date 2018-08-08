#include <bits/stdc++.h>
#define newline printf ("\n")
#define space printf (" ")
#define fread(a) freopen (a".in", "r", stdin), freopen (a".out", "w", stdout)
#define cinfalse ios::sync_with-stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)>(b)?(a):(b)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
#define MAXN 105
using namespace std;

int n, m;
int a[MAXN], v[MAXN];
int f[MAXN*MAXN];
int main()
{
	fread("medic");
    scanf ("%d%d", &m, &n);
    for (rint i = 0; i < n; i ++)
		scanf ("%d%d", &a[i], &v[i]);
	f[0] = 0;
	for (rint i = 0; i < n; i ++)
		for (rint j = m-a[i]; j >= 0; j --)
			if (f[j+a[i]] < f[j]+v[i])
				f[j+a[i]] = f[j]+v[i];
	printf ("%d", f[m]);
    return 0;
}
