#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[56];
    char num[7];
    float price;
    int code;
}fit;

fit *zad1(fit *a, int count, int *p)
{

    int i=count;
    fit *arr=NULL;
    arr=(fit*)realloc(arr, (++count)*sizeof(fit));
    printf("Enter name: ");
    fflush(stdin);
    scanf("%[^\n]s", arr[i].name);
    printf("Enter num: ");
    scanf("%s", arr[i].num);
    printf("Enter price: ");
    scanf("%f", &arr[i].price);
    printf("Enter code: ");
    scanf("%d", &arr[i].code);


    FILE *fp=fopen("membersText.txt", "w");

    if(fp == NULL)
    {
        printf("ERROR!\n");
        exit(1);
    }

    int len;

    for(i=0;i<count-1;i++)
    {
        len = strlen(a[i].name);
        fprintf(fp,"%d;%s;%s;%.2f;%d\n", len, a[i].name, a[i].num, a[i].price, a[i].code);
    }

    len = strlen(arr[i].name);

    fprintf(fp,"%d;%s;%s;%.2f;%d\n", len, arr[i].name, arr[i].num, arr[i].price, arr[i].code);
    fclose(fp);
    *p=count;


    return arr;
}

void zad2(fit *a, int count)
{
    int ind=0;
    int i=0,del=0;
    float avg=0.0;

    for(i=0;i<count;i++)
    {
        avg+=a[i].price;
        del++;
    }
    avg/=del;

    for(i=0;i<count;i++)
    {
        if(avg > a[i].price)
        {
            printf("%s-%s-%.2f\n", a[i].name, a[i].num, a[i].price);
            ind++;
        }

    }
    if(ind == 0)
        printf("None found\n");

}
void bin(fit *a, int count)
{
    int leng = 0;

    FILE *fp = fopen("members.bin", "wb");

    for(int i=0;i<count;i++)
    {
        leng = strlen(a[i].name);
        fwrite(&leng, sizeof(int), 1, fp);
        fwrite(&a[i], sizeof(fit), 1, fp);
    }
    fclose(fp);
}


void zad3(char n[])
{


    int i=0;
    FILE *fp = fopen("members.bin", "rb");

    if(fp == NULL)
    {
        printf("Cant open binary! \n");
        exit(2);
    }


    int len[100];
    fit *ar = NULL;

    int j=0;
    while(!feof(fp))
    {
        fread(&len[i], sizeof(int),1,fp);
        ar = (fit*)realloc(ar, (++j)*sizeof(fit));
        fread(&ar[i], sizeof(fit),1,fp);
        i++;

    }
    fclose(fp);
    int ind=0;
    for(j=0;j<i;j++)
    {
        if(strcmp(ar[j].num, n) == 0)
        {
            printf("%d;%s;%s;%.2f;%d\n", len[j], ar[j].name, ar[j].num, ar[j].price, ar[j].code);
            ind++;
        }

    }
    if(ind == 0)
        printf("Oops none found\n");

}

int main()
{
    int i=0,count=0;
    int n_count;

    fit *a=(fit*)malloc(2*sizeof(fit));

    strcpy(a[i].name, "Ivan Petrov");
    strcpy(a[i].num, "AA4523");
    a[i].price = 15.00;
    a[i].code = 456;
    i++;
    count++;
    strcpy(a[i].name, "Ivan Peg");
    strcpy(a[i].num, "AA4545");
    a[i].price = 5.00;
    a[i].code = 422;
    i++;
    count++;

    fit *arr = zad1(a, count, &n_count);
    for(i=0;i<count;i++)
        arr[i] = a[i];
//    for(i=0;i<n_count;i++)
//    {
//        int len = strlen(arr[i].name);
//        printf("%d;%s;%s;%f;%d\n", len, arr[i].name, arr[i].num, arr[i].price, arr[i].code);
//    }


    return 0;
}
