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
    return 0;
}
