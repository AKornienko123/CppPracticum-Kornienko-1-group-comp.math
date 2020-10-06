
#include <iostream>

int main()
{
    float a;
    float b;
    float c;
    printf("Enter a : ");
    scanf_s("%f", &a);
    printf("Enter b : ");
    scanf_s("%f", &b);
    printf("Enter c : ");
    scanf_s("%f", &c);

    double x = (a + b + c) / 2;
    double S = sqrt(x * (x - a) * (x - b) * (x - c));
    printf("Result S=%f\n", S);
}

