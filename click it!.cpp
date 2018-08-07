#include <bits/stdc++.h>
#include <Windows.h>
#define newline printf ("\n")
#define space printf (" ")
#define cinfalse ios::sync_with_stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)<(b)?(b):(a)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
using namespace std;

int x;
int main()
{
	printf ("[系统]：您的电脑正在关机！\n如想取消，请按下1，否则请按2\n");
	system ("shutdown -s");
	cin >> x;
	if (x == 1)
	{
		system ("shutdown -a");
		Sleep (1000); 
		system ("shutdown -s");
		printf ("不好！他又自行启动了！\n");
		printf ("[系统]:您的电脑将在1min内关机\n"); 
		printf ("[系统]:自力更生吧!\n");
		while (x > -10)
			printf ("[系统]:您的电脑将在1min内关机\n"), Sleep(10), x --; 
		system ("pause");
		printf ("[系统]:看在你那么有耐心的份上\n");
		printf ("[系统]:注销已取消\n");
		system ("shutdown -a");
		Sleep(1000);
		return 0; 
	}
	else if (x != -1)
		system ("shutdonw -f");
	else
	{
		system ("shutdown -a");
		printf ("[系统]:关机已取消\n");
		for (int i = 0; i < 100; i ++)
			printf ("[系统]:您的电脑将在1min内关机\n"), Sleep(19); 
		return 0; 
	}
    return 0;
}

