// Estudiante: Cifuentes González Elian
// Fecha de entrega: 05/06/2024
// Curso: 1ro de TI

// 8) Recícle el código del ejercicio #2 para imprimir las 20 primeras tablas de multiplicar
#include <iostream>

using namespace std;

// Función para imprimir la tabla de multiplicar
void TablaMultiplicar(int tabla)
{
    cout << endl << "Tabla de multiplicar del " << tabla;
    for (int k = 1; k <= 12; k++)
    {
        cout << endl << tabla << " x " << k << " = " << tabla * k;
    }
}

int main()
{
    cout << "Las 20 primeras tablas del multiplicar" << endl;
    for (int x = 1; x <= 20; ++x)
    {
        TablaMultiplicar(x);
        cout << endl;
    }
    return 0;
}
