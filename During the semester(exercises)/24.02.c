#include <stdio.h>
#include <stdlib.h>

int main()
{
    //11111111111111 and 2222222
//    int a;
//    printf("Enter a number: ");
//    scanf("%d", &a);
//
//    if(a>6){
//        printf("The num is greater that 6\n");
//
//    }
//
//    if(a%8 > 4){
//        printf("The num has remain greater than 4");
//    }

// 3333333333333

//    int a,b,c;
//
//    printf("Enter a number: ");
//    scanf("%d", &a);
//
//    printf("Enter a number: ");
//    scanf("%d", &b);
//
//    printf("Enter a number: ");
//    scanf("%d", &c);
//
//    if(a<b && a<c){
//        printf("Min = %d", a);
//    }else if(b<c){
//        printf("Min = %d", b);
//
//    }else{
//        printf("Min = %d", c);
//    }

    // 444444444444444

//    int d;
//    printf("Enter a num:");
//    scanf("%d", &d);
//    switch (d)
//     {
//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;
//     default:
//         printf("Invalid day");
//     }

    //5555555555555

//     int num;
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//

    //6666666666666

//    int a,b;
//    int i;
//    int sum = 0;
//    int mult = 1;
//
//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b);
//
//    for(i =a+1; i <b; i++){
//        if(i%2==0){
//            sum +=;
//        }else
//            mult *=i;
//
//
//    }
//    printf("Sum is %d0, sum");
//    printf("\nMult is %d", mult);


    // 777777777777777


//     int n, k, count = 0;
//     scanf("%d %d", &n, &k);
//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         scanf("%d", &temp);
//         if(temp < k && temp % 3 != 0)
//         {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//
//


     //8888888888

//     int i;
//     int sum=0;
//
//     do{
//        sum+=i;
//        printf("Enter a number: ");
//        scanf("%d",&i);
//
//     }while(i != 0);
//     printf("%d", sum)



    float f, l;
    scanf("%f %f", &f, &l);
    for (float i = f; i <= l; i += 0.01)
    {
        printf("%f\n", i * i - 4);
    }



    return 0;
}
