#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Articles
{
    char name[11];
    char manifacturer[16];
    double price;
    int quantity;
}store;

void add(store *a)
{
    fflush(stdin);
    printf("Enter name: ");
    scanf("%[^\n]s", a->name);
    printf("Enter manifacturer: ");
    scanf("%s", a->manifacturer);
    printf("Enter price: ");
    scanf("%lf", &a->price);
    printf("Enter quantity: ");
    scanf("%d", &a->quantity);
}
void info(store art[], int count)
{
    for(int i=0;i<count;i++)
    {
        printf("Article %d:\tName: %s, Manifacturer: %s, Price: %.2lf, Quantity: %d\n", i+1,art[i].name, art[i].manifacturer, art[i].price, art[i].quantity);
    }
}

void average(store art[], int count)
{
    double sum=0;
    int del=0;
    for(int i=0;i<count;i++)
    {
        sum+=art[i].price;
        del++;
    }
    sum/=del;
    printf("Average price: %.2lf\n", sum);
}

void sort(store art[], int count)
{
    store *temp = (store*)malloc(count*sizeof(store));
    int m=0;
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(strcmp(art[i].name, art[j].name) > 0)
            {
                temp[0] = art[i];
                art[i] = art[j];
                art[j] = temp[0];
                m++;
            }
        }
    }
    printf("Sorted:\n");
    for(int i=0;i<count;i++)
    {
    printf("Article %d:\tName: %s, Manifacturer: %s, Price: %.2lf, Quantity: %d\n", i+1,art[i].name, art[i].manifacturer, art[i].price, art[i].quantity);
    }
}
int main()
{

    store *art = (store*)malloc(30*sizeof(store));
    int i=0;
    int count=0;
    char inp[10];
    char end[10]="end";

    while(1)
    {
        add(&art[i]);
        i++;
        count++;
        printf("If you are done type \"end\": ");
        scanf("%s", &inp);
        if(strcmp(inp, end) == 0)
            break;

    }
    printf("\n");
    info(art, count);
    printf("\n");
    average(art, count);
    printf("\n");
    sort(art, count);

    return 0;
}
