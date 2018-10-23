#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,parent,key,ch1,ch2,n;
	float A[10];
	clrscr();
printf("\n Enter the no of Chromosomes\n");
scanf("%d",&n);

printf("\n Enter the crossponding fitness value \n");
for(i=0;i<n;i++)
	{
		scanf("%f",&A[i]);
	}
printf("\n Chromosomes number	   Fitness value\n");
for(i=0;i<n;i++)
{
	printf("%d\t\t\t\t%0.2f",i+1,A[i]);
	printf("\n");
}

	printf("\n Enter randomly first parent\n");
	scanf("%d",&ch1);
	printf("\n Enter randomly second parent\n");
	scanf("%d",&ch2);


	if(A[ch1+1]<A[ch2+1])
	parent=ch1;
	else
	parent=ch2;
printf("\n The selected parent is %d",parent);
	getch();
	return 0;

}
