#include <stdio.h>
#include <stdlib.h>

int main()
{
    //11111111111111
//    int i;
//    int realsum=0;
//    int count;
//    int *p;
//
//    printf("Enter Count: \n");
//    scanf("%d", &count);
//
//    p = (int*)malloc(count*sizeof(int));
//
//    for(i=0;i<count;i++)
//    {
//        printf("Enter a number: \n");
//        scanf("%d", &p[i]);
//
//    }
//
//    for(i=0;i<count;i++)
//    {
//        realsum += p[i];
//    }
//    printf("Sum = %d", realsum);

    //2222222222222222


    int i;
    int count, new_count;
    int *p;
    int *pnt;
    printf("Enter Count: \n");
    scanf("%d", &count);

    p = (int*)malloc(count*sizeof(int));

    for(i=0;i<count;i++)
    {
        printf("Enter a number: \n");
        scanf("%d", &p[i]);

    }
    printf("Enter New Count: \n");
    scanf("%d", &new_count);
    pnt = (int*)realloc(new_count*sizeof(int));

    if(new_count>count)
    {
        for(int i = n;i<new_count;i++)
        {

        }
    }

    return 0;
}
