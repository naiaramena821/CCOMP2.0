#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "ingrese un numero: ";
    cin >> x;
    if (x % 2 == 0) {
        cout << "es un numero par" << endl;
    }
    else {
        cout << "es un numero impar" << endl;
    }
    return 0;
}

