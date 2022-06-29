#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Store
{
    char name[31];
    int ID;
    char date[11];
    double price;
}store;

void add(store *a)
{
    fflush(stdin);
    printf("Enter name: ");
    scanf("%[^\n]s", a->name);
    printf("Enter ID: ");
    scanf("%d", &a->ID);
    fflush(stdin);
    printf("Enter Date: ");
    scanf("%[^\n]s", a->date);
    printf("Enter Price: ");
    scanf("%lf", &a->price);
}

store *expire(store *a, int count, char date[], int *p)
{
    store *items = NULL;
    int counter=0;
    int j=0;

    for(int i=0;i<count;i++)
    {
        if(strcmp(date, a[i].date) == 0)
        {
            items = (store*)realloc(items, (++counter)*sizeof(store));
            items[j]=a[i];
            j++;
        }
    }

    *p=j;
    return items;
}

    //33333333333333333333333333333333333333333333333333333333
    //33333333333333333333333333333333333333333333333333333333

void print(store *items, int count)
{
    int j=0;
    store *read_b = (store*)malloc(count*sizeof(store));
    store *read_t = (store*)malloc(count*sizeof(store));

    FILE *fp = fopen("in.bin", "rb");
    if(fp == NULL)
    {
        printf("ERROR 4\n");
        exit(4);
    }

//    for(i=0;i<count;i++)
    while(!feof(fp))
    {
        fread(&read_b[j], sizeof(store), 1, fp);
        j++;
    }
    fclose(fp);

    j=0;
    fp = fopen("in.txt", "r");

    while(!feof(fp))
    {
        fscanf(fp, "%s %i %s %lf", read_t[j].name, &read_t[j].ID, read_t[j].date, &read_t[j].price);
        j++;
    }
    fclose(fp);
    for(int m=0;m<count;m++)
    {
        printf("Binary text: \n");
        printf("\n\tName: %s\n\tID: %d\n\tExpire Date: %s\n\tPrice: %lf\n", read_b[m].name, read_b[m].ID, read_b[m].date, read_b[m].price);
        printf("Text file text: \n");
        printf("\n\tName: %s\n\tID: %d\n\tExpire Date: %s\n\tPrice: %lf\n", read_t[m].name, read_t[m].ID, read_t[m].date, read_t[m].price);
        printf("---------------------\n");
    }
}

int main()
{
    int i=0, count=0;
    int j=0;
    char inp[10];
    char end[10]= "end";

    store *items = (store*)malloc(30*sizeof(store));

    while(1)
    {
        add(&items[i]);
        i++;
        count++;
        printf("If you are done adding type \"end\": ");
        scanf("%s", &inp);
        if(strcmp(inp, end) == 0)
            break;
    }

    FILE *fp = fopen("in.bin", "wb");
    if(fp == NULL)
    {
        printf("ERROR 1\n");
        exit(1);
    }

    for(i=0;i<count;i++)
    {
        if(fwrite(&items[i], sizeof(store), 1, fp) != 1)
        {
            printf("ERROR 2\n");
            exit(2);
        }

    }
    fclose(fp);

    fp = fopen("in.txt", "w");
    if(fp == NULL)
    {
        printf("ERROR 3\n");
        exit(3);
    }

    for(i=0;i<count;i++)
    {
        fprintf(fp, "%s %d %s %lf\n", items[i].name, items[i].ID, items[i].date, items[i].price);
    }
    fclose(fp);


    // 333333333
//    store *read_b = (store*)malloc(count*sizeof(store));
//    store *read_t = (store*)malloc(count*sizeof(store));
//
//    fp = fopen("in.bin", "rb");
//    if(fp == NULL)
//    {
//        printf("ERROR 4\n");
//        exit(4);
//    }
//
////    for(i=0;i<count;i++)
//    while(!feof(fp))
//    {
//        fread(&read_b[j], sizeof(store), 1, fp);
//        j++;
//    }
//    fclose(fp);
//
//    j=0;
//    fp = fopen("in.txt", "r");
//
//    while(!feof(fp))
//    {
//        fscanf(fp, "%s %i %s %lf", read_t[j].name, &read_t[j].ID, read_t[j].date, &read_t[j].price);
//        j++;
//    }
//    fclose(fp);
//    for(int m=0;m<count;m++)
//    {
//        printf("Binary text: \n");
//        printf("\n\tName: %s\n\tID: %d\n\tExpire Date: %s\n\tPrice: %lf\n", read_b[m].name, read_b[m].ID, read_b[m].date, read_b[m].price);
//        printf("Text file text: \n");
//        printf("\n\tName: %s\n\tID: %d\n\tExpire Date: %s\n\tPrice: %lf\n", read_t[m].name, read_t[m].ID, read_t[m].date, read_t[m].price);
//        printf("---------------------\n");
//    }

    print(items, count);
    // 33333333333333
    char date[15];
    printf("Enter date: ");
    scanf("%s", &date);
    int a=0;
    store *p=expire(items,count,date,&a);

    if(a>0)
    {
        for(i=0;i<a;i++)
        {
            printf("%s %d %s %.2f\n", p[i].name, p[i].ID, p[i].date, p[i].price);
        }
    }else
        printf("No product found that expires on %s\n", date);

    return 0;
}
