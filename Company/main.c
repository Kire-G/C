#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Associate
{
    int ID;
    double payment;
    int weekly_hours;
    double weekly_income;
}ass;
void add(ass *a)
{
    printf("Enter ID: ");
    scanf("%d", &a->ID);
    printf("Enter payment: ");
    scanf("%lf", &a->payment);
    printf("Enter weekly worked out hours: ");
    scanf("%d", &a->weekly_hours);
    printf("Enter weekly income: ");
    scanf("%lf", &a->weekly_income);
}
void average(ass company[], int count)
{
    double avg_weekly=0;
    double avg=0;
    int del=0;
    double dds;

    for(int i=0;i<count;i++)
    {
        dds = 0.0365;
        avg_weekly=company[i].payment*1.5*company[i].weekly_hours;
        avg_weekly+=company[i].weekly_income;
        dds*=avg_weekly;
        avg_weekly-=dds;
        del++;
        avg+=avg_weekly;
    }
    avg/=del;
    printf("Average salary for the associates is %lf\n", avg);
//154.16   158.9775
}

int main()
{
    int i =0, count=0;
    char inp[10];
    char done[10]="done";
    char yes[10]="yes";
    ass *company = (ass*)malloc(30*sizeof(ass));
    while(1)
    {
        add(&company[i]);
        count++;
        i++;
        printf("If you are done type \"done\": ");
        scanf("%s", &inp);
        if(strcmp(inp, done) == 0)
            break;
    }

    printf("If you want to calculate average weekly salary type \"yes\": ");
    scanf("%s", &inp);

    if(strcmp(inp, yes) == 0)
    {
        average(company, count);
    }

    FILE *fp = fopen("comp.bin", "wb");

    for(i=0;i<count;i++)
    {
        fwrite(&company[i],sizeof(ass),1,fp);
    }
    fclose(fp);

    ass *read=(ass*)malloc(count*sizeof(ass));

    fp = fopen("comp.bin", "rb");
    for(i=0;i<count;i++)
    {
        fread(&read[i], sizeof(ass), 1, fp);
    }
    fclose(fp);

    printf("\n");
    printf("Binary text:\n");
    for(i=0;i<count;i++)
    {
        printf("ID: %d, Payment: %lf, Weekly hours: %d, Weekly income: %lf\n", read[i].ID, read[i].payment, read[i].weekly_hours, read[i].weekly_income);
    }



    return 0;
}
