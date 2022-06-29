#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//11111111111111111111111111

//typedef struct Box
//{
//    int height;
//    int width;
//    int lenght;
//    int volume;
//}box;
//
//void volume(box *a)
//{
//    a->volume=a->height*a->width*a->lenght;
//};
//
//void input(box *a)
//{
//    printf("Enter height: ");
//    scanf("%d", &a->height);
//    printf("Enter lenght: ");
//    scanf("%d", &a->lenght);
//    printf("Enter width: ");
//    scanf("%d", &a->width);
//
//};

    //22222222222222222222

typedef struct Books
{
    char name[20];
    char author[20];
    int year;
    int price;

}book;

void print(char author[20], int count, book books[])
{
    int i;
    for(i=0;i<count;i++)
    {

        if(strcmp(books[i].author, author) == 0)
            printf("Name = %s, Year = %d, Author = %s, Price = %d\n", books[i].name, books[i].year, books[i].author, books[i].price);
    }
}

void info_year(book books[], int count)
{
    int i;
    for(i=0;i<count;i++)
    {
        if(books[i].year > 2005)
            printf("Name = %s, Year = %d, Author = %s, Price = %d\n", books[i].name, books[i].year, books[i].author, books[i].price);
    }
}
void prt_info(book books[], int count)
{
    int i;
    printf("Books: \n");
    for(i=0;i<count;i++)
    {
        printf("Name = %s, Year = %d, Author = %s, Price = %d\n", books[i].name, books[i].year, books[i].author, books[i].price);
    }
}

void input(book *a)
{

    printf("Enter book's name: ");
    scanf("%[^\n]s", &a->name);
    fflush(stdin);

    printf("Enter book's author: ");
    scanf("%[^\n]s", &a->author);
    fflush(stdin);

    printf("Enter year: ");
    scanf("%d", &a->year);


    printf("Enter price: ");
    scanf("%d", &a->price);
    fflush(stdin);

}


int main()
{
    //11111111111111111111111111

//    int i;
//    box a[10];
//    for (int i=1;i<=10;i++){
//        printf("Box %d\n",i);
//        input(&a[i-1]);
//        printf("\n");
//    }
//
//    for(i=1;i<=10;i++)
//    {
//        volume(&a[i-1]);
//    }
//
//    int max = a[0].volume;
//    int min = a[0].volume;
//    int numMax = 0, numMin = 0;
//
//    for(i=1;i<=10;i++)
//    {
//        if(max < a[i-1].volume)
//        {
//            max = a[i-1].volume;
//            numMax = i;
//        }
//
//        if(min>a[i-1].volume)
//        {
//            min = a[i-1].volume;
//            numMin = i;
//        }
//
//    }
//
//    printf("\n");
//    printf("\n");
//    printf("Box %d has the highest volume = %d\n", numMax, max);
//    printf("Box %d has the lowest volume = %d", numMin, min);


    int n, m;
    char author[20];
    printf("Enter how many books you want: ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter author: ");
    scanf("%s", &author);
    printf("\n");
    fflush(stdin);

    book books[n];
    m=n;

    for(int i=1;i<=n;i++)
    {
        printf("Book %d: \n", i);
        input(&books[i-1]);
        printf("\n");
    }

    info_year(books, n);
    print(author, n, books);


    return 0;
}
