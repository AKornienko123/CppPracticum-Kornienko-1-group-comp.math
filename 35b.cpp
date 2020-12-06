#include <iostream>
#include <cmath>


int main()
{

    int a, b, c, n, d, f;
    a = -99;
    b = a;
    c = b;
    n = 3;
    
    while (a <=0 ) {
        
        
        if (n == 3) {
            a = a + b + c + 200;
            n += 1;
            f = a;
        }
        
       
        if (n <= 5 and n != 3) {
            d = a;
            a = a + b + c + 200;
            b = d;
            n += 1;
        }
        
        else {
            c = f;
            d = a;
            a = a + b + c + 200;
            f = b;
            b = d;
            n += 1;
        }
        
        
        }
    printf("a=:%i", a);
    
    }

    


