//Estudiante: Cifuentes González Elian
//Fecha de entrega: 09/06/2024
//Curso: 1ro de TI

//5) Diseñe la función que recibe como parámetro un entero y devuelve verdadero si el número es par, devuelve falso si es impar
#include <iostream>

using namespace std;

//Función para encontar un número par o impar
bool parimpar(int numero) {
    if (numero % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    
    if (parimpar(num)) {
        cout << "El número es par" << endl;
    } else {
        cout << "El número es impar" << endl;
    }
    
    return 0;
}

