

#include <iostream>

int main()
{
    float a, b = 1;
    int i = 1;
    printf("a:");
    scanf_s("%f", &a);
    
    while (i != a+1) {
        b = b * i;
        i += 1;
    }
    printf("b=:%f",b);
}

