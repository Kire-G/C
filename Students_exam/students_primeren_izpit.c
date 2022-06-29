#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Students
{
    int num;
    char f_n[15];
    char s_n[15];
    char l_n[15];
    int MAT[10];
    int BG[10];
    int IT[10];

}st;

void add_student(st *a);
void add_grade(st stud[], int count_st, int n);
void calculate(st stud[], int cl, int count_st); // num *100  ==> example: 12315 - 123 *100 = 12399-12300 = 99 <100 or if it is not same class 27515 - 12300= something >100

int main()
{
    char add_s[20]="add student";
    char add_g[20]= "add grade";
    char calc[20]= "calculate";
    char END[10]="END";
    char inp[30];
    st stud[30];
    int i=1, j=0;

    FILE *fp = fopen("test.txt", "r");
    int count_st=0;

    while(!feof(fp))
    {
        fseek(fp, -5L, SEEK_CUR);
        j=0;
        fscanf(fp, "%d", &stud[i-1].num);
        fseek(fp, 1, SEEK_CUR);
        fscanf(fp, "%s", &stud[i-1].f_n);
        fscanf(fp, "%s", &stud[i-1].s_n);
        fscanf(fp, "%s", &stud[i-1].l_n);
        fseek(fp, 6, SEEK_CUR);
        while(1)
        {
            fscanf(fp,"%d", &stud[i-1].MAT[j]);
            if(isdigit(stud[i-1].MAT[j]) != 0)
                break;
            if(stud[i-1].MAT[j] >6)
            {
                stud[i-1].MAT[j] = 0;
            }

            else
                j++;
        }
        fseek(fp, 4, SEEK_CUR);
        j=0;
        while(1)
        {
            fscanf(fp,"%d", &stud[i-1].BG[j]);
            if(isdigit(stud[i-1].BG[j]) != 0)
                break;
            if(stud[i-1].BG[j] >6)
                stud[i-1].BG[j] = 0;
            else
                j++;
        }
        fseek(fp, 4, SEEK_CUR);
        j=0;

        while(1)
        {
            fscanf(fp,"%d", &stud[i-1].IT[j]);
            if(isdigit(stud[i-1].IT[j]) != 0)
                break;
            if(stud[i-1].IT[j] >6)
                stud[i-1].IT[j] = 0;
            else
                j++;
        }
        i++;
        count_st++;
    }

    fclose(fp);

             // operations ///////////////

    for(i=1;i<=count_st;i++)
    {
        printf("%d: %s %s %s",stud[i-1].num, stud[i-1].f_n, stud[i-1].s_n, stud[i-1].l_n);
        printf(";MAT: ");
        for(int m=1;stud[i-1].MAT[m-1];m++)
        {
            printf("%d ", stud[i-1].MAT[m-1]);
        }
        printf(";BG: ");
        for(int m=1;stud[i-1].BG[m-1];m++)
        {
            printf("%d ", stud[i-1].BG[m-1]);
        }
        printf(";IT: ");
        for(int m=1;stud[i-1].IT[m-1];m++)
        {
            printf("%d ",stud[i-1].IT[m-1]);
        }printf("\n");

    }

    i--;
    int n;
    int cl;
    while(1)
    {
        fflush(stdin);
        printf("Enter operation: ");
        scanf("%[^\n]s", &inp);
        fflush(stdin);
        if(strcmp(inp, add_s)==0)
        {
            add_student(&stud[count_st]);
            count_st++;
        }
        else if(strcmp(inp, add_g) == 0)
        {
            printf("Enter student's number: ");
            scanf("%d", &n);
            add_grade(stud, count_st,n);
        }
        else if(strcmp(inp, calc) == 0)
        {
            printf("Enter class: ");
            scanf("%d", &cl);
            calculate(stud, cl, count_st);
        }
        else if(strcmp(inp, END) == 0)
            break;
        else
            printf("Invalid input! \n");
    }
    printf("\n");
    printf("Number of students: %d\n", count_st);

    for(i=1;i<=count_st;i++)
    {
        printf("%d: %s %s %s",stud[i-1].num, stud[i-1].f_n, stud[i-1].s_n, stud[i-1].l_n);
        printf(";MAT: ");
        for(int m=1;stud[i-1].MAT[m-1];m++)
        {
            printf("%d ", stud[i-1].MAT[m-1]);
        }
        printf(";BG: ");
        for(int m=1;stud[i-1].BG[m-1];m++)
        {
            printf("%d ", stud[i-1].BG[m-1]);
        }
        printf(";IT: ");
        for(int m=1;stud[i-1].IT[m-1];m++)
        {
            printf("%d ",stud[i-1].IT[m-1]);
        }printf("\n");

    }


    return 0;
}


void add_student(st *a)
{

    printf("Enter number: ");
    scanf("%d", &a->num);
    printf("Enter first name: ");
    scanf("%s", &a->f_n);
    printf("Enter second name: ");
    scanf("%s", &a->s_n);
    printf("Enter last name: ");
    scanf("%s", &a->l_n);

}
void add_grade(st stud[], int count_st, int n)
{
    int j=0,i=1;
    int number;
    int res = 1;
    char inp[20];
    char MAT[20] = "MAT";
    char BG[10] = "BG";
    char IT[10] = "IT";
    for(i=1;i<=count_st;i++)
    {
        if(n == stud[i-1].num)
        {
            printf("Enter subject: ");
            scanf("%s", &inp);
            res--;
            number = i-1;
        }
    }
    if(res != 0)
        printf("Student not found!\n");
    if(strcmp(inp, MAT) == 0)
    {

        if(stud[number].MAT[j]>=2)
        {
            while(stud[number].MAT[j]>=2 || stud[number].MAT[j]<=6)
            {
                j++;
                if(stud[number].MAT[j] > 6 || stud[number].MAT[j] < 2)
                    break;
            }
        }


        printf("Student %d MAT grade number: %d\n", n, j+1);
        scanf("%d", &stud[number].MAT[j]);
        if(stud[number].MAT[j]>6 || stud[number].MAT[j]<2)
        {
            printf("Invalid grade! ");
            scanf("%d", &stud[number].MAT[j]);
        }
    }

    else if(strcmp(inp, BG) == 0)
    {
        j=0;
        if(stud[number].BG[j] >=2)
        {
            while(stud[number].BG[j] >=2 || stud[number].BG[j] <=6)
            {
                j++;
                if(stud[number].BG[j] > 6 || stud[number].BG[j] < 2)
                {
                    break;
                }

            }
        }

        printf("Student %d BG grade number: %d\n", n, j+1);
        scanf("%d", &stud[number].BG[j]);
        if(stud[number].BG[j]>6 || stud[number].BG[j]<2)
        {
            printf("Invalid grade! ");
            scanf("%d", &stud[number].BG[j]);
        }
    }
    else if(strcmp(inp, IT) == 0)
    {
        j=0;
        if(stud[number].IT[j]>=2)
        {
            while(stud[number].IT[j] >=2 || stud[number].IT[j] <=6)
            {
                j++;
                if(stud[number].IT[j] > 6 || stud[number].IT[j] < 2)
                {
                    break;
                }
            }
        }
        printf("Student %d IT grade number: %d\n", n, j+1);
        scanf("%d", &stud[number].IT[j]);
        if(stud[number].IT[j]>6 || stud[number].IT[j]<2)
        {
            printf("Invalid grade! ");
            scanf("%d", &stud[number].IT[j]);
        }
    }

    else if(res == 0)
        printf("Invalid subject! \n");

}
void calculate(st stud[], int cl, int count_st)
{
    int klass=0;
    int i=0,j=0;
    float sum=0.0;
    int del=0;
    cl *= 100;
    for(i=0;i<=count_st;i++)
    {
        klass = stud[i].num -cl;
        if(klass < 100 && klass >=1)
        {
            printf("%d\n", stud[i].num);

            for(j=0;stud[i].MAT[j];j++)
            {
                sum+=stud[i].MAT[j];
                del++;
            }

            for(int m=0;stud[i].BG[m];m++)
            {
                sum+=stud[i].BG[m];
                del++;
            }

            for(int k=0;stud[i].IT[k];k++)
            {
                sum+=stud[i].IT[k];
                del++;
            }
        }else
            continue;
    }
    sum/=del;
    printf("Average = %.2f\n", sum);
}
