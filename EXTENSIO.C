#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n,a,b,c=0,d=0,f=0;
float br[3];

printf("\nEnter the length of array\n");
scanf("%d",&n);
float arr[n],arr3[n],arr2[n];
printf("\n Enter the elements of the universe \n");
for(i=0;i<n;i++)
{
 scanf("%f",&arr3[i]);
}
printf("\n Enter the values\n");
for(i=0;i<n;i++)
{
 scanf("%f",&arr[i]);
}
printf("\n fuzzy set A is \n");
for(i=0;i<n;i++)
{
printf("%.2f/%.2f\t",arr[i],arr3[i]);
}
;
printf("\n Enter the values of equation x^a-b\n");
printf("\nEnter the value of a:\n");
scanf("%d",&a);
printf("\nEnter the value of b:\n");
scanf("%d",&b);
printf("\n\n fuzzy set B is\n\n");
for(i=0;i<n;i++)
{
 arr2[i]=(pow(arr3[i],a))-b;
 printf("%.2f/%.2f\t",arr[i],arr2[i]);
}
printf("\n\n");

for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++);
 {
  if(arr2[i]==arr2[j])
  {

  	br[c]=arr2[i];
  	 if(arr[i]>arr[j])
  	 {
  	  printf("%.2f/%.2f\t",arr[i],br[c]);
  	 }
  	 else if(arr[j]>=arr[i])
  	 {
   	 printf("%.2f/%.2f\t",arr[j],br[c]);
  	 }
 	  c++;
		d=0;
		f=0;

 }
 }
}
for(i=0;i<n;i++)
{
  for(c=0;c<3;c++)
  {
  if(br[c]==arr2[i])
  b++;
  }
  if(b==0)
  {
  printf("%.2f/%.2f",arr[i],arr2[i]);
  }
  b=0;
}
return 0;
}
