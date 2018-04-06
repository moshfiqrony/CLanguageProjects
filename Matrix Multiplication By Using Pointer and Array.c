#include<stdio.h>
#include<windows.h>

void input(int *ptr);
void outpt(void);
void cal(void);

/*Declaring Global variable*/
int a[2][2],b[2][2],c[2][2],sum,i,j,k;


void main()
{
    int *p;
    p=a;
    printf("Enter First Matrix Elements :\n");
    input(p);/*Calling input() function for input*/
    printf("\n\n");
    p=b;
    printf("Enter Second Matrix Elements :\n");
    input(p);/*Calling input() function for input*/
    cal();/*Calling cal() for multiplication*/
    printf("\n\n");/*printing two new line*/
    printf("Multiplication of two matrix:\n\n\n");
    outpt();/*printing output*/

}


void input(int *ptr)/*input user define function*/
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&*ptr);
            ptr++;
        }
    }
}

void cal(void)/*cal user define function*/
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<=1;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
               sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
}

void outpt(void)/*output user define function*/
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%6d ", c[i][j]);
            Sleep(1000);
        }
        printf("\n\n");
    }

}
