#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students_names
{

    char f_n[16];
    char s_n[16];
    char l_n[16];

}names;

typedef struct Students_info
{

    double grade;
    char gender[10];
    char speciality[16];
    int years_old;

}info;
void add(names *a, info *b)
{
    printf("Enter f name: ");
    scanf("%s", &a->f_n);

    printf("Enter s name: ");
    scanf("%s", &a->s_n);

    printf("Enter l name: ");
    scanf("%s", &a->l_n);

    printf("Enter grade: ");
    scanf("%lf", &b->grade);

    printf("Enter gender: ");
    scanf("%s", &b->gender);

    printf("Enter speciality : ");
    scanf("%s", &b->speciality);

    printf("Enter how old is the student: ");
    scanf("%d", &b->years_old);
}
void great(info stud[], names students[], int count)
{
    int i=0;

    for(i=0;i<count;i++)
    {
        if(stud[i].grade > 4.50)
            printf("%s %s %s has grade higher than 4.50 - Students grade: %lf\n", students[i].f_n, students[i].s_n, students[i].l_n, stud[i].grade);
    }
}

void exce(info stud[],names students[], int count)
{

    int i=0;

    for(i=0;i<count;i++)
    {
        if(stud[i].years_old > 25 && stud[i].grade == 6.00)
        {
            printf("%s %s %s has excellent grade and is %d years old- Students grade: %lf \n", students[i].f_n, students[i].s_n,
                                                                             students[i].l_n, stud[i].years_old, stud[i].grade);
        }
    }
}
void higher(info stud[], int count)
{
    char male[10]="male";
    char female[10]="female";
    int i=0;
    int female_sum=0;
    int male_sum=0;
    int male_del=0;
    int female_del=0;

    for(i=0;i<count;i++)
    {
        if(strcmp(stud[i].gender, male) == 0)
        {
            male_sum+=stud[i].grade;
            male_del++;
        }else
        {
            female_sum+=stud[i].grade;
            female_del++;
        }
    }
    female_sum/=female_del;
    male_sum/=male_del;
    if(female_sum > male_sum)
    {
        printf("Females have higher average grade: %d\n", female_sum);
    }else
    {
        printf("Males have higher average grade: %d\n", male_sum);
    }
}

int main()
{
    int i=0;
    char inp[10];
    char end[10]="end";
    int count = 0;

    info *stud = (info*)malloc(30*sizeof(info));
    names *students = (names*)malloc(30*sizeof(names));

    while(1)
    {
        printf("Student %d\n", i+1);
        add(&students[i], &stud[i]);
        i++;
        count++;
        printf("To stop enter \"end\": ");
        scanf("%s", &inp);
        if(strcmp(inp, end) == 0)
            break;
    }

    exce(stud, students, count);
    great(stud,students,count);
    higher(stud, count);

    return 0;
}
