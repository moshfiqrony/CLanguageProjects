#include <stdio.h>

#define ELM 5
void srt(int a[]);

void main()
{
    int a[ELM],i;

    printf("Enter element to sort: \n");
    for(i=0;i<ELM;i++)
    {
        scanf("%d", &a[i]);
    }
    system("cls");
    printf("\n\nSort Of your value is : \n");
    srt(a);

}

void srt(int a[])
{
    int i,j,tmp;
    for(i=0;i<ELM;i++)
    {
        for(j=(i+1);j<ELM;j++)
        {
            if(a[i]>a[j])
            {
               tmp = a[i];
               a[i] = a[j];
               a[j] = tmp;
            }
        }
    }
    for(i=0;i<ELM;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n\nThe large number is : %d",a[ELM-1]);
}
