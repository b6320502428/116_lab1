#include <stdio.h>
int main()
{
	unsigned int n,m;
	unsigned long int t;
	char s,ans;
	scanf("%u %u %lu",&n,&m,&t);
	fflush(stdin);
	scanf("%c",&s);
	if(n>0&&m>0&&t>0)
	{
		if(s='L')
		{
			while(t>0)
			{
				t=t-n;
				if(t<=0)
				{
					ans='L';
					break;
				}
				t=t-m;
				if(t<=0)
				{
					ans='R';
					break;
				}
			}
		}
		else if(s='R')
		{
			while(t>0)
			{
				t=t-m;
				if(t<=0)
				{
					ans='R';
					break;
				}
				t=t-n;
				if(t<=0)
				{
					ans='L';
					break;
				}
			}
		}
	}
	printf("%c",ans);
	return 0;
}
