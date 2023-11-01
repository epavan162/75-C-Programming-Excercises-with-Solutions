/*c program for  of two matrices
PIN NO:18172-CM-002
E.PAVAN KALYAN*/
#include<stdio.h>
#define ROWS 10
#define COLS 10
void main()
{
		int i,j,k,m1,n1,m2,n2;
		int A[ROWS][COLS];
		int B[ROWS][COLS];
		int C[ROWS][COLS];

	printf("Enter values of m1,n1,m2,n2");
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);

	if(n1!=m2)
	{
			printf("Multiplication is not possible");
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
	//Multiplication logic
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n2;j++)
			{
				C[i][j]=0;
				for(k=0;k<n1;k++)
				{
					C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
				}
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
	printf("Multiplication of A and B are\n");
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n2;j++)
			{
					printf("%d\t",C[i][j]);
			}
			printf("\n");
	}
}
	

