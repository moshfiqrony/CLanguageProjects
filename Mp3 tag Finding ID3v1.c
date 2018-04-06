#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
    FILE* mrid;
    long int i;

    char* tag = (char*)malloc(4);
    char* title = (char*)malloc(31);
    char* album = (char*)malloc(31);
    char* year = (char*)malloc(5);
    char* artist = (char*)malloc(31);
    char* comments = (char*)malloc(31);

    mrid = fopen("d:\\romance.mp3","r");

    if(NULL == mrid)
    {
        printf("\n File open error.");
        return 0;
    }

    fseek(mrid,-128L,2);
    fgets(tag,4,mrid);

    if(0 != strcmp(tag,"TAG"))
    {
        printf("\n Not an ID3v1 standard MP3.");
        fclose(mrid);
        return 0;
    }

    fgets(title,31,mrid);
    fgets(artist,31,mrid);
    fgets(album,31,mrid);
    fgets(year,5,mrid);
    fgets(comments,31,mrid);

    printf("\n TAG         : %s",tag);
    printf("\n TITLE       : %s",title);
    printf("\n ARTIST      : %s",artist);
    printf("\n ALBUM       : %s",album);
    printf("\n YEAR        : %s",year);
    printf("\n COMMENTS    : %s",comments);

    fclose(mrid);
    getch();
    return 0;
}
