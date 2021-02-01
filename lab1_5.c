#include <stdio.h>
int main()
{
	int n;
	scanf ("%d",&n);
	int x[n],l,i,m=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(m<x[i])
		{
			m=x[i];
			l=i+1;
		}
	}
	printf("%d %d",l,m);
	return 0;
}
