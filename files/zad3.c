#include <stdlib.h>
#include <stdio.h>

void words(FILE *fp)
{
    int i=1;
    int word=1;
    char str[1000];
    while(!feof(fp))
    {
        fgets(str,1000,fp);
        for(int i=0;str[i];i++)
        {
            if(str[i] == ' ')
                word++;
        }
        printf("%s", str);
    }
    printf("\n");
    printf("\n");
    printf("Total words = %d\t", word);
}

void sentences(FILE *fp)
{
    int sent = 0;
    char str[1000];
    fseek(fp,0,SEEK_SET);
    while(!feof(fp))
    {
        fgets(str,1000,fp);
        for(int i=0;str[i];i++)
        {
            if(str[i] == '.')
                sent++;
        }
    }

    printf("Total sentences = %d", sent);
}

int main()
{


    FILE *fp = fopen("zad3_13.txt", "r");

    if(fp == NULL) {
      perror("Error opening file");
      exit(1);
    }
    words(fp);
    sentences(fp);


    return 0;
}

