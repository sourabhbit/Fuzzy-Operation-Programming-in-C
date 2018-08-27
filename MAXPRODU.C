#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,k,l;
float A[2][2],B[2][2],C[2][2],ar[2],temp;
clrscr();
printf("\nEnter the elements in array R1 between 0 and 1\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%f",&A[i][j]);
}
}
printf("\nEnter the elements in array R2 between 0 and 1\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%f",&B[i][j]);
}
}
printf("\n The elements of array R1 are\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%f",A[i][j]);
printf("\t");
}
printf("\n");
}
printf("\n The elements of array R2 are\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%f",B[i][j]);
printf("\t");
}
printf("\n");
}
for(l=0;l<2;l++)
{
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
ar[j]=A[i][j]*B[j][l];
}
for(k=0;k<2;k++)
{
if(ar[k]>=ar[k+1])
{
temp=ar[k];
}
else
{
temp=ar[k+1];
}
}
C[i][l]=temp;
}
}
printf("\n The max-prod  is \n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%f",C[i][j]);
printf("\t");
}
printf("\n");
}
getch();
return 0;
}
