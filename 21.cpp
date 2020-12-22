#include <iostream> 
using namespace std;

int main()
{
    int N, a, b;
    bool up = true, down = true;
    cout << "Lenght of row ";
    cin >> N;
    
    cin >> a;
    for (int i = 2; i <= N; i++)
    {
        b = a;
        cin >> a;
        if (a <= b) up = false;
        if (a >= b) down = false;
    }

    if (up) cout << "Monotone\n";
    else if (down) cout << "Monotone\n";
 
}