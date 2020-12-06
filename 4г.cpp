
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265 

int main()
{
    int i = 1;
    float x,n,a;
    float sum = 1; 

    printf("n: ");
    scanf_s("%f", &n);

    

    printf("x: ");
    scanf_s("%f", &x);
    
    a = sin(x);
    
    
    while(i <= n) {
    
        
        
        sum = sum + pow(a, i);
        
        i += 1;
    }
    printf("sum=%f", sum);
    
    
}