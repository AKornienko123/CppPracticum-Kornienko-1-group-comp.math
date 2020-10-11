

#include <iostream>
#define PI 3.14159265
int main()
{
    float a, b, c, R, O, P, Q, W, D, S, ctga, ctgc;

    printf("Angle A: ");
    scanf_s("%f", &a);

    printf("Angle B: ");
    scanf_s("%f", &b);

    printf("Angle C: ");
    scanf_s("%f", &c);

    printf("R: ");
    scanf_s("%f", &R);

    O = 90 - (a / 2);
    P = 90 - (c / 2);

  

    

    Q = R * tan(O * PI / 180);
    W = R * tan(P * PI / 180);

    

    D = Q + W;

    ctga = (cos(a * PI / 180) / (sin(a * PI / 180)));
    ctgc = (cos(c * PI / 180) / (sin(c * PI / 180)));

    S = (pow(D,2)) / (2 * (ctga + ctgc));

    printf("S=%f", S);
}
