#include <stdio.h>
#include <stdlib.h>

int main()
{
    //11111111111111111

//    int arr[8]={1,9,3,7,2,6,4,5};
//    int i,a,j,size=8;
//    for(i=0;i<size;i++)
//    {
//        for(j=i+1;j<size;j++)
//        {
//            if(arr[i]<arr[j])
//            {
//                a = arr[i];
//                arr[i] = arr[j];
//                arr[j] = a;
//            }
//
//        }
//
//    }
//
//    printf("%d\n", arr[7]);




      //222222222
//    int i;
//    int n[100]={};
//    int size;
//    printf("Enter size: ");
//    scanf("%d", &size);
//
//
//    for(i=0;i<100;i++){
//        scanf("%d", &n[i]);
//        if(n[i]==0){
//            break;
//        }
//
//    }
//
//    for(i=0;i<=size;i++)
//    {
//        if(n[i]<n[i++] && n[i++]>n[i+2] && n[i+2]<n[i+3] && n[i+3]<n[i+4] && n[i+4]<n[i+5])
//        {
//            printf("TRUE");
//        }else{
//            printf("FALSE");
//            break;
//        }
//    }


      // 333333333
//    int i, j, size, temp, n[100];
//    printf("Enter size: ");
//    scanf("%d", &size);
//
//    for(i=0;i<size;i++){
//    {
//        scanf("%d", &n[i]);
//    }
//    }
//    j=i-1;
//    i=0;
//
//    while(i<j)
//    {
//        temp = n[i];
//        n[i]=n[j];
//        n[j]=temp;
//        i++;
//        j--;
//
//    }
//
//    printf("\nResult: ");
//    for(i=0; i<size;i++)
//    {
//        printf("%d", n[i]);
//    }



    //44444444444444444444
//    int i, n, k, a, arr[50], temp;
//
//    printf("Enter n: ");
//    scanf("%d", &n);
//
//    printf("Enter k: ");
//    scanf("%d", &k);
//
//    for(i=0;i<n;i++)
//    {
//        printf("Enter array number [%d] ", i);
//        scanf("%d", &arr[i]);
//    }
//
//    for(i=0;i<n;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//////////////////
//    temp=arr[n-k];
////    a = arr[n-k+1];
//    for(i=n-1;i>0;i--)
//    {
//        arr[i]=arr[i-k];
//        if(k>i)
//        {
//            k-=n;
//        }
//        if(k<0)
//        {
//            k+=n;
//        }
//    }
//    arr[0]=temp;
//    temp = arr[n-k];
//    arr[1]=a;
////////////////////
//    printf("\n");
//    for(i=0;i<n;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//


    // 55555555555555

//    int size, i, n[100], k, j, a;
//    printf("Enter size: ");
//    scanf("%d", &size);
//
//    printf("Enter k: ");
//    scanf("%d", &k);
//
//    for(i=0;i<size;i++){
//        printf("Enter a umber: ");
//        scanf("%d", &n[i]);
//    }
//    for( i=0; i< size; i++)
//    {
//        for(j=i+1; j<size; j++)
//        {
//            if(n[i]>n[j])
//            {
//                a =n[i];
//                n[i]= n[j];
//                n[j]= a;
//            }
//        }
//    }
//    for( i=0; i< size; i++)
//    {
//        printf("%d\n", n[i]);
//    }
//    k--;
//
//    printf("%d largest is: %d", k+1, n[k]);


//4444444444444444
// int n;
// printf("What's the size of the array?\n");
// scanf("%d", &n);
//  int a[n];
// for (int i = 0; i < n; i++)
// {
// int b;
// printf("a[%d] = ", i);
// scanf("%d", &b);
// a[i] = b;
// }
//
// int k;
// printf("How much do you want the shift to be?");
// scanf("%d", &k);
//  int b[n];
// for (int i = 0; i < n; i++)
// {
// while(k >= n)
// {
// k -= n;
// }
// if (k < 0)
// {
// k += n;
// }
// b[k] = a[i];
// k++;
// }
// //
////Printing new array
// for (int i = 0; i < n; i++)
// {
// printf("b[%d] = %d\n", i, b[i]);
// }


    // 66666666666666666666

    int arr[3][3]=
    {
        {8, 5, 2},
        {9, 4 ,2},
        {4, 3 ,5}
    };

    int i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[j][j]>arr[j][j++] && arr[j][j++]>arr[j][j+2])
                printf("Arr is decreasing\n");
        }

    }

//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//        if(arr[i][j]<arr[i][j++] && arr[i][j++]<arr[i][j+2])
//            printf("Arr[%d] is increasing", arr[i][j]);
//        }
//    }


    return 0;
}
