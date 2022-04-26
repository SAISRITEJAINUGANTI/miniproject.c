#include <stdio.h>
void main()
{
int A[50][50],B[50][50],C[50][50],i,j,k,r,s;
int m,n;
printf("How many rows and columns for first matrix\n");
scanf("%d%d",&m,&n);
printf("How many rows and columns for second matrix\n");
scanf("%d%d",&r,&s);
if(m!=r)
printf("\n The matrix cannot multiplied");
else
{
printf("\n Enter the elements of first matrix ");
for(i= 0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("\t%d",&A[i][j]);
}
printf("\n Enetr the elements of second matrix ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("\t%d",&B[i][j]);
}
printf("\n The element of first matrix is");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("\t%d",A[i][j]);
}
printf("\n The element of second matrix is");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("\t%d",B[i][j]);
}
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
C[i][j]=0;
for(k=0;k<m;k++)
C[i][j]=C[i][j]+A[i][k]*B[k][j];
}
}
}
printf("\n Multiplication of two matrix is");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("\t%d",C[i][j]);
}
}