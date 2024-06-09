//Estudiante: Cifuentes González Elian
//Fecha de entrega: 09/06/2024
//Curso: 1ro de TI

//1) Diseñe la función que recibe como parámetro un entero, y calcula el cuadrado de ese entero
#include <iostream>
using namespace std;


//Función para el cuadrado de un número 
int cuadradonum (int num) // Función definida por el usuario
{
    int resultado;
    resultado = num * num;
    return resultado;
}

int main()
{
    cout << endl << "Calculo del cuadrado de un número" << endl;

    int num = 7;
    cout << "El cuadrado de " << num  << " es: " << cuadradonum(num) << endl;

    //Pida al usuario ingresar un número y muestre el cuadrado de ese número
    int x;
    cout << endl << "Ingrese el número que desea elevar al cuadrado: ";
    cin >> x;
    cout << "El cuadrado de " << x << " es: " << cuadradonum(x);

    return 0;
}