#include <stdlib.h>
#include <stdio.h>

int main()
{

    int n,num,number;
    int i=0;
    printf("Enter n: \n");
    scanf("%d", &n);

    FILE *fp = fopen("zad4.bin", "wb");
    if(fp == NULL)
    {
        printf("ERROR!\n");
        exit(1);
    }

    fwrite(&n,sizeof(int),1,fp);
    printf("%d: %d\n",i+1, n);
    for(i=0;i<n;i++)
    {
        num = rand() %100+1;
        fwrite(&num,sizeof(int),1,fp);
        printf("%d: %d \n", i+2, num);

    }
    fclose(fp);

    fp = fopen("zad4.bin", "rb");

//    fseek(fp,0,SEEK_SET);

    int j=0,m=0,k=0;
    int even[100];
    int odd[100];
    int arr[100];

    while(!feof(fp))
    {
        k++;
        fread(&number,sizeof(int),1,fp);
        arr[k-1]=number;
    }
    fclose(fp);

    for(i=0;i<=n;i++)
    {
        if(arr[i]%2 == 0)
        {
            even[j]=arr[i];
            j++;
        }
        else if(arr[i]%2 !=0)
        {
            odd[m]=arr[i];
            m++;
        }
        else
            continue;
    }


    printf("\n");

    for(i=0;i<=n;i++)
        printf("%d ", arr[i]);

    printf("\n Even numbers: \n");

    for(i=0;i<j;i++)
        printf("%d ", even[i]);
    printf("\n ODD numbers: \n");
    for(i=0;i<m;i++)
        printf("%d ", odd[i]);



    printf("\n SORTED: \n");
    int low, od,temp;
    for(i=0;i<=n;i++)
    {
        low=i;
        for(j=0;j<=n;j++)
        {
            if(arr[j]>arr[low])
            {
               temp = arr[j];
               arr[j]=arr[low];
               arr[low]=temp;
            }
        }
    }

    for(i=0;i<=n;i++)
        printf("%d ",arr[i]);

    return 0;
}
