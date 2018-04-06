#include<stdio.h>

void main()
{
    int i,j,k,row;
    printf("Enter Row: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=row;j>=i;j--)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*   ");
        }
        printf("\n");
    }
}
