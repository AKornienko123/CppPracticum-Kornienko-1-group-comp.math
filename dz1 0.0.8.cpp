
#include <iostream>

int main()
{
    float x;
    printf("Enter x : ");
    scanf_s("%f", &x);
    double y = log10(x);

    printf("Result y=%.3f\n", y);
}

