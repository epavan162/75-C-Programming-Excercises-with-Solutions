/*c program to print symbol*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int m,n,i,j;
	printf("Enter the m and n values\n");
	scanf("%d%d",&m,&n);
	i=1;
	while(i<=m)
	{
		j=1;
		while(j<=n)
		{
			printf("$ ");
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
}

