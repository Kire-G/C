#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    // func for 2222222222
//    int lenstr(char s1[])
//    {
//        int i, count=0;
//        for(i=0;s1[i];i++)
//            count++;
//    return count;
//    }

    // func for 4444444444444

    void func(char s1[], char s2[])
    {
        int i, count=0;
        if(strlen(s1) == strlen(s2))
        {
            for(i=0;i<s1[i];i++)
                if(s1[i] == s2[i])
                    count++;
        }
        if(count == strlen(s1))
            printf("%s = %s", s1, s2);
        else
            printf("%s != %s", s1, s2);
    }


int main()
{
    // Тема: Низова константа

    // 1111111111111111

//    char c1[6]="Hello";
//    char c2[5]="helo";
//    char c3[10];
//
//
//    printf("%s\n", strcpy(c3,c1));
//    printf("%s\n",strcat(c3,c2));
//    printf("%d\n",strlen(c3));
//    printf("%d\n",strcmp(c1,c2));


    // 2222222222

//    char s1[6]="Hello";
//    printf("%d", lenstr(s1));

    // 333333333333333

//    int i, count=1;
//
//    char s1[50]="Kire Georgiev  ggg g a";
//    for(i=0;s1[i];i++)
//        if(s1[i] == ' ' && s1[i+1] != ' ')
//            count++;
//    printf("%d", count);

    // 444444444444
    char s1[50]="Hello";
    char s2[50]="hello";
    func(s1, s2);

    return 0;
}
