//Estudiante: Cifuentes González Elian
//Fecha de entrega: 09/06/2024
//Curso: 1ro de TI

//2) Diseñe la función que imprime una tabla de multiplicar
#include <iostream>
using namespace std;

//Función tabla de multiplicar
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
    cout << "Función que calcula una tabla de multiplicar";

    int num;
    cout << endl << "Ingrese un número para la tabla de multiplicar: ";
    cin >> num;
    TablaMultiplicar(num);
    return 0;
}