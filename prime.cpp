#include <bits/stdc++.h>
#define newline printf ("\n")
#define space printf (" ")
#define fread(a) freopen (a".in", "r", stdin), freopen (a".out", "w", stdout)
#define cinfalse ios::sync_with-stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)>(b)?(a):(b)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
#define MAXN 205
using namespace std;

int n;
long long f[MAXN];
int prime[46] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
int main()
{
	fread("prime");
	while (scanf ("%d", &n) != EOF)
	{
		memset (f, 0, sizeof (f));
		f[0] = 0;
		f[1] = 0;
		f[2] = 1;
		for (rint i = 0; i < 46; i ++, f[prime[i]] ++)
			for (rint j = prime[i]; j <= n; j ++)
				f[j] += f[j-prime[i]];
		printf ("%lld", f[n]), newline;
	}
	return 0;
}
