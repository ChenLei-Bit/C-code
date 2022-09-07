#include<stdio.h>
int main()
{
	int max(int x, int y, int z);
		int a, b, c, d;
	scanf("%d,%d,%d", &a, &b, &c);
	d = max(a, b, c);
	printf("max=%d\n",d);
	return 0;
}
int max(int x, int y, int z)
{
	int	g;
	if (x > y > z)g = x;
	if (x > z > y)g = x;
	if (y > x > z)g = y;
	if (y > z > x)g = y;
	else g = z;
	return(g);
}