#include <iostream>
#include <cmath>


int main()
{
    
    float y, a;
    int i;

    i = 0;
    printf("y: ");
    scanf_s("%f", &y);
    a = y;
    
    while (y != 0) {

        printf("y: ");
        scanf_s("%f", &y);
        if (a > 0 and y < 0) {
            i += 1;


        }
        else if (a < 0 and y > 0) {
            i += 1;
        }
        a = y;

        }

    printf("i=: %i ", i);
    }

    