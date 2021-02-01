#include <stdio.h>
int main()
{
	unsigned long long int n;
	int x1,x2;
	scanf ("%llu",&n);
	x1=n%3;
	x2=n%11;
	printf("%d %d",x1,x2);
	return 0;
}
