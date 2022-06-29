#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,n;
    FILE *fp = fopen("zad2_13", "wb");
    if (fp == NULL)
    {
        printf("Error in creating output\n");
        exit(1);
    }
    printf("Numbers:\n");
    for(int i=0; i<50; i++)
    {
        num = rand() %1000+1;
        fwrite(&num,sizeof(int),1,fp);
        printf("%d \n", num);
    }
    fclose(fp);

    printf("\nEnter position: \n");
    scanf("%d", &n);

    fp = fopen("zad2_13", "rb");
    fseek(fp, (n-1)*sizeof(int), SEEK_SET);
    fread(&num, sizeof(int), 1, fp);

    fclose(fp);
    printf("The number is : %d", num);

    return 0;
}
