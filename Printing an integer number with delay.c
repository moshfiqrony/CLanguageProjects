#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

void pr(int id,int prr[]);
void prin(int prrr[]);
int i;

void main()
{
    int id,prrr[100];
    scanf("%d",&id);
    system("cls");
    pr(id,prrr);
    printf("\n\n\t\t\t");
    prin(prrr);
}

void pr(int id,int prr[])
{
    int p;
    while(id!=0)
    {
        p=(id%10);

        prr[i]=p;
        id/=10;
        i++;
    }
}
void prin(int prrr[])
{
    while(i!=0)
    {
        printf("%d",prrr[--i]);
        Sleep(200);
    }
}
