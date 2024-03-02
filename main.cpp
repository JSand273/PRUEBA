#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

        int a, b;
        cout << "\n Ingrese numero a:";
        cin >> a;
        cout << "\n Ingrese numero b:";
        cin >> b;
        if (a == b)
            cout << "\n Son iguales";
        else {
            if (a > b)
                cout << "\n El mayor es: " << a;
            else
                cout << "\n El mayor es: " << b;
        }
    int numero;
    system("cls");


    cout << "Introduce numero: ";
    cin >> numero;

    if(numero % 2 == 0)
        cout << endl << numero <<" es par\n";
    else
        cout << endl << numero <<" es impar\n";

    system("pause");
    return 0;
}
