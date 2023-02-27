#include<stdio.h>
main()
{
	int i,n,r,sum;
	scanf("%d",&n);
	i=1;
	for(i=1;i<=2;i++)
	{
		sum=0;
		while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/ 10;
		}
		n=sum;
		
	}
	printf("\n%d",sum);
}
