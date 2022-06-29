#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Artist
{
    char name[21];
    int age;
    char country[21];
    float income;
    char Oscars[3];
}star;

void add(star *a)
{
    fflush(stdin);
    printf("Enter name:\n");
    scanf("%[^\n]s", a->name);
    printf("Enter age:\n");
    scanf("%d", &a->age);
    printf("Enter country:\n");
    scanf("%s", a->country);
    printf("Enter income:\n");
    scanf("%f", &a->income);
    printf("Enter Oscar awards: \n");
    scanf("%s", a->Oscars);
}

star *return_inc(star *a, long int income, int count)
{
    star *Artist = NULL;
    int counter=0;
    int j=0;
    for(int i=0;i<count;i++)
    {
        if(a[i].income > income)
        {
            Artist = (star*)realloc(Artist, (++counter)*sizeof(star));
            Artist[j] = a[i];
            j++;
        }

    }
    return Artist;
}


int main()
{
    int i=0,num;
    int count=0;

    FILE *fp=fopen("izp.txt", "r");

    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    int j=0;
    char inc[30];
    char buf[BUFSIZ];
    star *Artists = (star*)malloc(20*sizeof(star));
    while(!feof(fp))
    {

        fscanf(fp, "%[^ ;]%*c %i", Artists[i].name, &Artists[i].age);
        fseek(fp,1,SEEK_CUR);
        fscanf(fp,"%[^ ;]%*c ", Artists[i].country);
        fscanf(fp,"%[^ ;]%*c ", inc);
        Artists[i].income = atof(inc);

        fscanf(fp,"%[^ \n\0;]%*c", Artists[i].Oscars);

        i++;
        count++;

    }

    for(i=0;i<count;i++)
    {
        printf("%s ", Artists[i].name);
        printf("%d ", Artists[i].age);
        printf("%s ", Artists[i].country);
        printf("%.2f ", Artists[i].income);
        printf("%s\n", Artists[i].Oscars);
    }


    while(1)
    {
        printf("Cinema star %d\n", i+1);
        add(&Artists[i]);
        printf("Enter 0 to stop\n");
        scanf("%d", &num);
        count++;

        if(num == 0)
            break;
        else
            i++;
    }
    int income;
    printf("Enter income: ");
    scanf("%d", &income);
    star *n = return_inc(Artists, income, count);
    for(i=0;i<30;i++)
    {
        printf("%s %d %s %.2f %s\n", n[i].name, n[i].age, n[i].country, n[i].income, n[i].Oscars);
        if(n[i+1].age <1 || n[i+1].age>120)
            break;
    }


    return 0;
}


