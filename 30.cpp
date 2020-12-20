#define N  4
#define M  5
#include <iostream>
using namespace std;

int main() {
    int ary[N][M] = { { 1, 2, 3, 9, 2},{ 2, 4, 6, 7, 2},{ 7, 8, 2, 4, 1},{ 7, 8, 2, 1, 9} };
    int n,a;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            std::cout << ary[i][j] << " ";

        std::cout << std::endl;
    }
    std::cout << "n= ";
    std::cin >> n;
    int i = 0;
    for (int j = 0; j < M; j++)
    {
     a = ary[i][j];
     ary[i][j] = ary[i + n][j];
     ary[i + n][j] = a;   
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            std::cout << ary[i][j] << " ";

        std::cout << std::endl;
    }
    
}
    