#include <stdio.h>
#include<string.h>

//1.д
typedef
struct Blank {
    char book;
    int reader;
};

//1.e
typedef
struct Field {
    char row;
    int column;
};

//1.є
typedef
struct Circle {
    double radius;
    double center_point[2];
};


int main()
{
    struct Blank d1 = { 'Z', 213 };
    printf("Author name:  ");
    printf("%c", d1.book);
    printf("\n");
    printf("Reader ticket:  ");
    printf("%d", d1.reader);
    printf("\n");

    struct Field f1 = { 'r', 6 };
    printf("field row:  ");
    printf("%c", f1.row);
    printf("\n");
    printf("field column:  ");
    printf("%d", f1.column);
    printf("\n");

    struct Circle c1 = { 2, {2,2} };
    printf("circle center x:  ");
    printf("%lf", c1.center_point[1]);
    printf("\n");
    printf("circle radius:  ");
    printf("%lf", c1.radius);

}