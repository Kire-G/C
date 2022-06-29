#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //333333333333333333
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
     // 1111111111111111
//    int x;
//    float y;
//    char z[10];
//
//
//    FILE *fp = fopen("exercise.txt", "w");
//    fprintf(fp, "%d %f %s", 5, 5.2, "hi");
//
//    fclose(fp);
//
//    fp = fopen("exercise.txt", "r");
//    fscanf(fp, "%d %f %s", &x, &y, z);
//
//    fclose(fp);
//    printf("x = %d , y = %f z = %s", x, y, z);

    //22222222222222222222222222222222222

//    int arr[15]={5,2,7,4,6,1,9,10,45,56};
//
//    FILE *fp = fopen("zad2", "wb");
//    if(fp ==NULL)
//    {
//        printf("ERROR\n");
//        exit(1);
//    }
//    fwrite(arr, sizeof(arr), 1, fp);
//
//    fclose(fp);
//
//    int n;
//    int num;
//
//    printf("Enter n\n");
//    scanf("%d", &n);
//    fp = fopen("zad2", "rb");
//
//    fseek(fp, (n-1)*sizeof(int), SEEK_SET);
//    fread(&num, sizeof(int), 1, fp);
//    fclose(fp);
//
//    printf("Number = %d", num);

    // petuk///////////////////////// petuk///////////////////////// petuk///////////////////////// petuk///////////////////////// petuk///////////////////////

    // 11111111111111

//    char n1[30];
//    char n2[30];
//    char n3[30];
//    char n4[30];
//    char n5[30];
//    char new_l[10]="\n";
//
//    scanf("%[^\n]s", &n1);
//    fflush(stdin);
//    scanf("%[^\n]s", &n2);
//    fflush(stdin);
//    scanf("%[^\n]s", &n3);
//    fflush(stdin);
//    scanf("%[^\n]s", &n4);
//    fflush(stdin);
//    scanf("%[^\n]s", &n5);
//    fflush(stdin);
//
//
//    FILE *fp = fopen("zad1_13.txt", "w");
//    fputs(n1,fp);
//    fputs(new_l,fp);
//    fputs(n2,fp);
//    fputs(new_l,fp);
//    fputs(n3,fp);
//    fputs(new_l,fp);
//    fputs(n4,fp);
//    fputs(new_l,fp);
//    fputs(n5,fp);
//    fputs(new_l,fp);
//
//    fclose(fp);
//
//    fp = fopen("zad1_13.txt", "r");
//    fgets(n1,30-1,fp);
//    fgets(n2,30-1,fp);
//    fgets(n3,30-1,fp);
//    fgets(n4,30-1,fp);
//    fgets(n5,30-1,fp);
//
//    fclose(fp);
//
//    printf("n1 = %s", n1);
//    printf("n2 = %s", n2);
//    printf("n3 = %s", n3);
//    printf("n4 = %s", n4);
//    printf("n5 = %s", n5);

    // 222222222222222222

//    int num,n;
//    FILE *fp = fopen("zad2_13", "wb");
//    if (fp == NULL)
//    {
//        printf("Error in creating output\n");
//        exit(1);
//    }
//    for(int i=0; i<50; i++)
//    {
//        num = rand() %1000+1;
//        fwrite(&num,sizeof(int),1,fp);
//    }
//    fclose(fp);
//
//    printf("Enter position: \n");
//    scanf("%d", &n);
//
//    fp = fopen("zad2_13", "rb");
//    fseek(fp, (n-1)*sizeof(int), SEEK_SET);
//    fread(&num, sizeof(int), 1, fp);
//
//    fclose(fp);
//    printf("The number is : %d", num);

    // 33333333333333

    FILE *fp = fopen("zad3_13.txt", "r");

    if(fp == NULL) {
      perror("Error opening file");
      exit(1);
    }
    words(fp);
    sentences(fp);


    return 0;
}
