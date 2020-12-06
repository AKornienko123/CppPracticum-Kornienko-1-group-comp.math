#include <iostream>
#include <cmath>


int main()
{
    int i = 1;
    float y, n, z;
    float a;

    printf("n: ");
    scanf_s("%f", &n);

    printf("y: ");
    scanf_s("%f", &y);
    
    a = y;
    if (abs(a) >= 1) {
       a = a;
    }

    else {
        a = 2;
    }

    while (i <= n-1) {

        printf("y: ");
        scanf_s("%f", &y);

        if (abs(y) >= 1) {
            z = y;
        }

        else {
            z = 2;
        }
        
        if (a <= z) {
            a = a;
        }
        else {
            a = z;
        }

        i += 1;

    }

    printf("a=%f", a);

}