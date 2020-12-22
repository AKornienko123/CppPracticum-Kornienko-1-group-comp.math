#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    struct Object
    {
        char material[20];
        double m;
        double V;
        double P;
    };

    int n;
    cout << " number of materials: " << endl;
    cin >> n;

    Object* mat = new Object[n];
    for (int i = 0; i < n; i++)
    {

        cout << "Name of material" << i + 1 << endl;
        cout << "material: ";
        cin >> mat[i].material;
        cout << "V: ";
        cin >> mat[i].V;
        cout << "Weight: ";
        cin >> mat[i].m;
        cout << endl << endl;
    }
    
    cout << endl << endl;
    for (int i = 0; i < n; i++) {
        cout << " | material: " << mat[i].material << " | V: " << mat[i].V << " | Weight: " << mat[i].m << endl;
        cout << endl << endl;
    }

    double a,b;

    for (int i = 0; i < n; i++)
    {
        mat[i].P = mat[i].m / mat[i].V;
    }
    b = max(mat[0].P, mat[1].P);
    for (int i = 0; i < n; i++)
    {
        a = max(b, mat[i].P);
        b = a;
    }
    for (int i = 0; i < n; i++) {
        if (b == mat[i].P) {
            cout << "Higest density material " << mat[i].material << endl;
        }
    }
    system("pause");
    return 0;
}