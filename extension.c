#include<stdio.h>
int main()
{
    int A[10],B[10],i,j,size,t=0;
    float mf[10],temp[10];
    printf("Enter the size of set A and set B:");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
    printf("\nEnter the elements of A:");
    scanf("%d",&A[i]);
    printf("\nEnter the corresponding value of membership functions between [0,1]:");
    scanf("%f",&mf[i]);
    }
    printf("The set A is as follows:");
    for(i=1;i<=size;i++)
    {
        printf("%f/%d\t",mf[i],A[i]);
    }
    printf("\n");
    for(i=1;i<=size;i++)
    {
        B[i]=A[i]*A[i]-3;
    }
    printf("\nThe values of set B after extension:\n");
    for(i=1;i<=size;i++)
        printf("%f/%d\t",mf[i],B[i]);
        printf("\n");
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(B[i]==B[j])
            {
                if(mf[i]>mf[j])
                {
                    temp[i]=mf[i];
                    t = size-1;
                }
                else if(mf[i] == mf[j])
                    {}
                else
                {
                    temp[i] = mf[j];
                }
            }
            else
            {
                temp[i] = mf[i];
            }

        }}
        for(i=1;i<t;i++)
        printf("%f/%d\t",temp[i],B[i]);
    return 0;
}
