#include <stdio.h>
#include <stdlib.h>


typedef struct box{
float length;
float width;
float high;
float vol;
};
void volume(struct box *a){
a->vol=a->length*a->high*a->width;
}
void input(struct box *a){
printf("Length: ");
scanf("%f",&a->length);
printf("Width: ");
scanf("%f",&a->width);
printf("High: ");
scanf("%f",&a->high);
}

int main()
{

    struct box a[10];
    for (int i=1;i<=10;i++){
        printf("Box %d\n",i);
        input(&a[i-1]);

    }
    for (int i=1;i<=10;i++){
        volume(&a[i-1]);
    }
    float min=a[0].vol;
    float max=a[0].vol;
    for (int i=1;i<=10;i++){
        if (a[i-1].vol>max){
            max=a[i-1].vol;
        }
         if (a[i-1].vol<min){
            min=a[i-1].vol;
        }
    }
    printf("\n");
    for (int i=1;i<=10;i++){
        if (a[i-1].vol==max){
            printf("Box %d with biggest volume:\n",i);
            printf("Volume: %.2f\n",a[i-1].vol);
            printf("\n");
        }
         if (a[i-1].vol==min){
            printf("Box %d with smallest volume:\n",i);
            printf("Volume: %.2f\n",a[i-1].vol);
            printf("\n");
        }
    }

    return 0;
}

