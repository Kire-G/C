#include <stdio.h>
#include <stdlib.h>
    // 22222
//void func(int *p, int *o)
//{
//    int temp = *p;
//
//    *p = *o;
//    *o = temp;
//
//}

void num(int *p)
{
    if(*p == 1000){
        *p +=10;
    }else if(*p > 1000){
        *p /=10;
    }else{
        *p*=10;
    }
}

int main()
{
//    // 1111111111
//
//    int *p1;
//    double *p2;
//    char *p3;
//
//    int x;
//    double y;
//    char z;
//
//    p1=&x;
//    p2=&y;
//    p3=&z;
//
//    *p1=5;
//    *p2=7.46;
//    *p3='z';
//
//    printf("p1: %x, x: %d\n", p1, x);
//    printf("p2: %x, y: %lf\n", p2, y);
//    printf("p3: %x, z: %c\n", p3, z);
//    printf("\n");
//
//    // инкрементиране
//    p1++;
//    p2++;
//    p3++;
//    printf("p1:%x\n", p1);
//    printf("p2:%x\n", p2);
//    printf("p3:%x\n", p3);

    // 222222222222

//    int x =5, y= 4;
//    func(&x, &y);
//    printf("%d, %d", x,y);

    // 333333
    int n;
    n=2000;
    num(&n);
    printf("%d", n);

    return 0;
}
