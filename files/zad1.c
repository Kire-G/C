#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 11111111111111

    char n1[30];
    char n2[30];
    char n3[30];
    char n4[30];
    char n5[30];
    char new_l[10]="\n";

    scanf("%[^\n]s", &n1);
    fflush(stdin);
    scanf("%[^\n]s", &n2);
    fflush(stdin);
    scanf("%[^\n]s", &n3);
    fflush(stdin);
    scanf("%[^\n]s", &n4);
    fflush(stdin);
    scanf("%[^\n]s", &n5);
    fflush(stdin);


    FILE *fp = fopen("zad1_13.txt", "w");
    fputs(n1,fp);
    fputs(new_l,fp);
    fputs(n2,fp);
    fputs(new_l,fp);
    fputs(n3,fp);
    fputs(new_l,fp);
    fputs(n4,fp);
    fputs(new_l,fp);
    fputs(n5,fp);
    fputs(new_l,fp);

    fclose(fp);

    fp = fopen("zad1_13.txt", "r");
    fgets(n1,30-1,fp);
    fgets(n2,30-1,fp);
    fgets(n3,30-1,fp);
    fgets(n4,30-1,fp);
    fgets(n5,30-1,fp);

    fclose(fp);

    printf("n1 = %s", n1);
    printf("n2 = %s", n2);
    printf("n3 = %s", n3);
    printf("n4 = %s", n4);
    printf("n5 = %s", n5);

    return 0;
}
