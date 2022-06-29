#include <stdio.h>
#include <stdlib.h>
#define TRUE 0

void func()
{
    int i=0, f=1, count = 0, max=0;
    int n;

    while(f!=0)
    {   i++;
        printf("Enter %d. number: ", i);
        scanf("%d", &n);
        if(n == 0)
            break;
        else
            if(max<n)
                max=n;

    }   printf("Max  = %d", max);
}


int main()
{

    func();










    /* // 111111111111111
    int n1, n2;

    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter a number: ");
    scanf("%d", &n2);
    if(n1>=n2){
       printf("%d is the larger num\n", n1);
       printf("%d is the smaller num\n", n2);
    }else{
       printf("%d is the larger num\n", n2);
       printf("%d is the smaller num\n", n1);
    }
    */
    // 2222222222222

//    int n1, n2;
//    int i, j;
//    printf("Enter hour: ");
//    scanf("%d", &n1);
//    printf("Enter min: ");
//    scanf("%d", &n2);
//
//    n2+=15;
//    if(n2>=60){
//        i=n2-60;
//        n1+=1;
//        j=n1;
//    }else{
//        i=n2;
//        j=n1;
//    }if(n1>=24){
//        j=n1-24;
//    }if(i<=10){
//        printf("%d:0%d", j, i);
//    }else{
//        printf("%d:%d", j, i);
//    }

    //333333333
    /*
    int n, m, k;
    printf("Enter a num: ");
    scanf("%d", &n);

    printf("Enter a num: ");
    scanf("%d", &m);

    printf("Enter a num: ");
    scanf("%d", &k);

    if(n == m && n ==k){
        printf("Yes");

    }else{
        printf("No");

    }*/
    //444444444444

//    int n, m;
//    printf("Enter a num:");
//    scanf("%d", &n);
//
//    if(n<=100){
//        m+=5;
//    }else if(n>=100){
//        m+=0.2*n;
//    }else if(n>=1000){
//        m+=0.1*n;
//    }if(n%2 ==0){
//        m+=1;
//    }if(n%10==5){
//        m+=2;
//    }
//    printf("%d\n", m);
//    printf("%d\n", m+n);

    //555555555555555555


//    int n1, n2, n3;
//    int num, i, j;
//    printf("Time one: ");
//    scanf("%d", &n1);
//    printf("Time two: ");
//    scanf("%d", &n2);
//    printf("Time three: ");
//    scanf("%d", &n3);
//
//
//    num = n1+n2+n3;
//    j=0;
//
//    for(i=num; i>=60; i-=60){
//        j+=1;
//    }
//    if(i<=10){
//        printf("%d:0%d", j, i);
//    }else{
//        printf("%d:%d", j, i);
//    }

    // 666666666666666

//    int x,x1,x2,y,y1,y2;
//    printf("Enter x: ");
//    scanf("%d", &x);
//
//    printf("Enter x1: ");
//    scanf("%d", &x1);
//
//    printf("Enter x2: ");
//    scanf("%d", &x2);
//
//    printf("Enter y: ");
//    scanf("%d", &y);
//
//    printf("Enter y1: ");
//    scanf("%d", &y1);
//
//    printf("Enter y2: ");
//    scanf("%d", &y2);
//
//    if(x>x1 && x<x2 && y>y1 && y<y2){
//        printf("Inside");
//    }else{
//        printf("Outside");
//    }


    // 7777777777
//
//    float n;
//    char c;
//    printf("Enter kilom: ");
//    scanf("%f", &n);
//
//    printf("Enter period: ");
//    scanf(" %c", &c);
//
//    if(c == 'D' && n >= 20){
//        printf("Taxi: %f\n", 0.70+n*0.79);
//        printf("Bus: %f\n", n*0.09);
//
//    }if(c=='D' && n >=100){
//        printf("Train: %f\n", n*0.06);
//
//    }if(c=='N' && n>=20){
//        printf("Taxi: %f\n", 0.70+n*0.79);
//        printf("Bus: %f\n", n*0.09);
//    }if(c=='N' && n >=100){
//        printf("Train: %f\n", n*0.06);

//    }
//

    //8888888888888
//    int vol = 500;
//    int t1 = 40;
//    int t2 = 50;
//    int n, sum;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    sum = t1*n + t2*n;
//    if(sum<=vol){
//        printf("The pool has %d out of %d liters water in it", sum, vol);
//    }else{
//        printf("The pool is overflowing");
//    }
//
//

    //999999999999999999
    //От лозе с площ X квадратни метри се заделя 40% от реколтата за производство на вино.
    //От 1 кв.м лозе се изкарват Y килограма грозде. За 1 литър вино са нужни 2,5 кг. грозде. Желаното количество вино за продан е Z литра.

//Напишете програма, която пресмята колко вино може да се произведе и дали това количество е достатъчно.
//Ако е достатъчно, остатъкът се разделя по равно между работниците на лозето.

//    int vol;
//    float q ;
//    float grape;
//    float wine;
//    int goal;
//    float left_over = 0;
//
//
//    printf("Enter volume: ");
//    scanf("%d", &vol);
//
//    printf("Enter grape per square meter: ");
//    scanf("%f", &grape);
//
//    printf("Enter goal: ");
//    scanf("%d", &goal);
//
//    wine = (vol*grape)/2.5;
//    q = (vol*grape)*0.4;
//
//
//    if(wine>=goal){
//        left_over = wine - goal;
//        printf("Left over wine is %f", left_over);
//    }else{
//        printf("Not enough wine");
//    }
//

    //10 10 10 10 10 10 10 10
//    int f=1;
//    int num = 0;
//    float p1,p2,p3,p4,p5;
//    int count=0;
//    while(f!=0){
//        printf("Enter a number: ");
//        scanf("%d", &num);
//        if(num == 0){
//            break;
//        }
//        if(num <= 200){
//            p1+=1;
//            count+=1;
//        }else if(num>200 && num<400){
//            p2+=1;
//            count+=1;
//        }else if(num>=400 && num<600){
//            p3+=1;
//            count+=1;
//        }else if(num>=600 && num<800){
//            p4+=1;
//            count+=1;
//        }else if(num>=800 && num<=1000){
//            p5+=1;
//            count+=1;
//        }
//    }
//    printf("P1 = %.2f%%\n", p1/count*100);
//    printf("P2 = %.2f%%%\n", p2/count*100);
//    printf("P3 = %.2f%%%\n", p3/count*100);
//    printf("P4 = %.2f%%%\n", p4/count*100);
//    printf("P5 = %.2f%%%\n", p5/count*100);

    // 11 11 11 11 11 11 11 11 11 11 11

//    int n;
//    int i, j, l, m;
//    char c= '|';
//    int half;
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    if(n%2!=0){
//        n-=1;
//        half=n/2;
//        n+=1;
//    }else{
//        half=n/2;
//    }
//
//    printf("/");
//    for(j=1;j<=half;j++){
//        printf("^");
//    }
//    printf("\\");
//
//
//    if(n > 4){
//        for(l=1;l<=half;l++){
//            printf("_");
//        }
//    }else{
//        printf("");
//    }
//    printf("/");
//    for(j=1;j<=half;j++){
//        printf("^");
//    }
//    printf("\\\n");
//
//    for(i=1; i<= n-3;i++){
//        printf("%c", c);
//
//        for(m=1;m<=(n*2)-2;m++){
//            printf(" ");
//        }
//        printf("%c\n", c);
//    }
//    printf("%c", c);
//
//    // nad 5 tireta dolu
//
//    if(n > 4){
//    for(j=1;j<=half+1;j++){
//        printf(" ");
//        }
//        for(j=1;j<=half;j++){
//        printf("_");
//        }
//        for(j=1;j<=half+1;j++){
//        printf(" ");
//        }
//
//
//        }else{
//            for(i=1;i<=(n*2)-2;i++)
//            printf(" ");
//
//        }printf("|\n");
//
//
//
//
//    printf("\\");
//    for(l=1;l<=half;l++){
//        printf("_");
//    }
//    printf("/");
//    if(n>4){
//    for(j=1;j<=half;j++){
//        printf(" ");
//        }
//    }else{
//        printf("");
//        }
//    printf("\\");
//    for(j=1;j<=half;j++){
//        printf("_");
//    }
//    printf("/");


    // 12 12 12 12 12 12 12 12 12

//    int i, n, j, m;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    if(n%2==0){
//    for(j=1;j<=(n-2)/2;j++){
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\\ ");
//        printf("/");
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\n");
//
//        //wtori red
//
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//        printf("\\ ");
//        printf("/");
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//
//        printf("\n");
//
//
//    }
//    for(i=1;i<=n-1;i++){
//        printf(" ");
//    }
//    printf("@\n");
//
//    for(j=1;j<=(n-2)/2;j++){
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("/ ");
//        printf("\\");
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\n");
//
//        //wtori red
//
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//        printf("/ ");
//        printf("\\");
//
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//
//        printf("\n");
//
//    }
//    }
//    ////////// za nechetni
//    else{
//            m=n-1;
//        for(j=1;j<=(m-2)/2;j++){
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\\ ");
//        printf("/");
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\n");
//
//        //wtori red
//
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//        printf("\\ ");
//        printf("/");
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//
//        printf("\n");
//
//
//
//    }
//    for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\\ ");
//        printf("/");
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\n");
//
//
//    for(i=1;i<=n-1;i++){
//        printf(" ");
//    }
//    printf("@\n");
//
//    for(j=1;j<=(m-2)/2;j++){
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("/ ");
//        printf("\\");
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\n");
//
//        //wtori red
//
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//        printf("/ ");
//        printf("\\");
//
//        for(i=1;i<=n-2;i++){
//            printf("-");
//        }
//
//        printf("\n");
//
//    }
//    for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("/ ");
//        printf("\\");
//
//        for(i=1;i<=n-2;i++){
//            printf("*");
//        }
//        printf("\n");
//    }


    //111111111111111111111111111111111





    return 0;
}


