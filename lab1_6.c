#include <stdio.h>
int main()
{
	unsigned int n,m;
	unsigned long int t;
	char s,ans;
	scanf("%d %d %d",&n,&m,&t);
	fflush(stdin);
	scanf("%c",&s);
	if(s='L')
	{
		while(1)
		{
			t-=n;
			if(t<=0)
			{
				ans='L';
				break;
			}
			t-=m;
			if(t<=0)
			{
				ans='R';
				break;
			}
		}
	}
	else if(s='R')
	{
		while(1)
		{
			t-=m;
			if(t<=0)
			{
				ans='R';
				break;
			}
			t-=n;
			if(t<=0)
			{
				ans='L';
				break;
			}
		}
	}
	return 0;
}
