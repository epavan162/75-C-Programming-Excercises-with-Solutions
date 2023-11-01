/*c program to find the sum&average*/
/*PIN NO:18172-CM-002*/
/*E.PAVAN KALYAN*/
#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum,avg;
	printf("Enter the value of s1,s2,s3,s4,s5");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	avg=sum/5;
	printf("sum of all subjects is %d\n",sum);
	printf("average of all subjects is %d\n",avg);
}
