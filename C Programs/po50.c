/*c program for Addition of two matrices
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
#define ROWS 10
#define COLS 10
void main()
{
		int i,j,m1,n1,m2,n2;
		int A[ROWS][COLS];
		int B[ROWS][COLS];
		int C[ROWS][COLS];

	printf("Enter values of m1,n1,m2,n2");
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);

	if(m1!=m2||n1!=n2)
	{
			printf("Addition is not possible");
			return;
	}

	//Input for A matrix 
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n1;j++)
			{
					printf("A[%d][%d]=?",i,j);
					scanf("%d",&A[i][j]);
			}
	}

	//Input for B matrix
	for(i=0;i<m2;i++)
	{
			for(j=0;j<n2;j++)
			{
					printf("B[%d][%d]=?",i,j);
					scanf("%d",&B[i][j]);
			}
	}
	//Addition logic
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n1;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
			}
	}
	
	//A matrix output
	printf("Matrix A\n");
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n1;j++)
			{
					printf("%d\t",A[i][j]);
			}
			printf("\n");
	}
	
	//B matrix output
	printf("Matrix B\n");
	for(i=0;i<m2;i++)
	{
			for(j=0;j<n2;j++)
			{
				printf("%d\t",B[i][j]);
			}
			printf("\n");
	}
	
	//Result
	printf("Addition of A and B are\n");
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n2;j++)
			{
					printf("%d\t",C[i][j]);
			}
			printf("\n");
	}
}
	

