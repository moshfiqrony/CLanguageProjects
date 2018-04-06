#include<stdio.h>
#include<conio.h>

void main()
{
    FILE* inpt;
    char c;

    inpt = fopen("Rony first data file.txt", "a");
    printf("\t\t    Write Anything For Your TEXT File: \n\n\n\tPress CTRL+Z Or CTRL+D and Press Enter To Complete Writing.\n\n");

    while((c=getchar()) != EOF)
    {
        putc(c,inpt);
    }
    fclose(inpt);

    printf("\n\nYour Data Has Been Saved..\nPress Any Key to Read Data.\n\n");
    getch();

    inpt = fopen("Rony first data file.txt", "r");

    while((c = getc(inpt)) != EOF)
    {
        printf("%c",c);
    }
    fclose(inpt);
    getch();
}
