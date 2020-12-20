#include <iostream>
using namespace std;
int main() {
    int k = 0;
    float e, x, sum = 0, Xk = 0, t = 1;
    do {
        cout << "Enter x != 0 and e => 0 :\n";
        cin >> x >> e;
    } while (x == 0 || e <= 0);
    while (Xk < e) {
        
        if (k == 0) {
            t = 1;
        }
        else {
            t *= k;
        }
        Xk = pow(x, 2 * k) / pow(2, k) * t;
        sum += Xk;
        k++;
        
    }
    cout << "Sum = " << sum << "\nThe number of terms:" << k;

    
}