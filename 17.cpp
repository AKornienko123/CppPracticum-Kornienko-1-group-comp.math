#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 1, 3, 2, 4, 8, 11, 3, 5, 8, 7 };
    int max = arr[0], min = arr[0], q = 0, a;

    for (int i = 0; i < 10; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    q = (min + max) / 2;
    for (int i = 0; i < 10; i++)
    {
        if (abs(arr[i] - q) <= min)
        {
            min = abs(arr[i] - q);
            a = arr[i];
        }
    }
    cout << a << std::endl;
    return 0;
}