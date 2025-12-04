#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(c<(a+b)&&b<(a+c)&&a<(b+c))
	{
		printf("valid triangle");
	}
	else
	{
		printf("invalid triangle");
	return 0;
}
}
