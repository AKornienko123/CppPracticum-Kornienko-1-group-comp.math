#include<iostream>
#include<time.h>
using namespace std;
 
int main()
{
    int n = 0, m = 0;

    cout << "N=";
    cin >> n;
    cout << "M=";
    cin >> m;

    int** A = new int* [n];
    for (int i = 0; i < n; i++) 
    {
        A[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 100;
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Added line" << "\n";

    int** B = new int* [n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        B[i] = new int[m];
    }

    for (int j = 0; j < m; j++)
     {
        B[0][j] = rand() % 100;
     }

    for (int i = 1; i < n + 1  ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = A[i-1][j];
        }  
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m; j++)
        { 
            cout << B[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}