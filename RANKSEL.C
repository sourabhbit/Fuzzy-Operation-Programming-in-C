#include<stdio.h>
#include<conio.h>
int main()
{
float ff[10],temp;
int cnumber,rank,i,j,n;
printf("\nEnter the number of chromosomes:");
scanf("%d",&n);
printf("\nEnter the fitness values:");
for(i=0;i<n;i++)
{
scanf("%f",&ff[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(ff[i]>ff[j])
{
temp=ff[i];
ff[i]=ff[j];
ff[j]=temp;
}}}
printf("\nChromosomeno\tfitnessv\trank\n");
for(i=0;i<n;i++)
{
printf("%d\t\t%f\t%d\n",i+1,ff[i],i+1);
}
getch();
return 0;
}