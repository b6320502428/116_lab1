#include <stdio.h>
int main()
{
	float t;
	int h,m;
	scanf("%f",&t);
	m=t*100;
	m=m%60;
	h=((t*100)-m)/100;
	if(h<12&&h>=0)
	{
		printf("%d:",h);
		if(m<10)
		printf("0%d a.m.",m);
		else
		printf("%d a.m.",m);
	}
	else if(h==12)
	{
		printf("%d:",h);
		if(m<10)
		printf("0%d p.m.",m);
		else
		printf("%d p.m.",m);
	}
	else if(h>12&&h<24)
	{
		h-=12;
		printf("%d:",h);
		if(m<10)
		printf("0%d p.m.",m);
		else
		printf("%d p.m.",m);
	}
	return 0;
}
