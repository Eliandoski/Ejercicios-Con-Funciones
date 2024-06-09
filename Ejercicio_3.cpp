//Estudiante: Cifuentes González Elian
//Fecha de entrega: 09/06/2024
//Curso: 1ro de TI

//3) Diseñe las funciones que calculan las cuatro operaciones aritméticas básicas: suma, resta, producto, división
#include <iostream>
using namespace std;


//Funciones operaciones aritméticas básicas
double suma (double num, double num2) //Función suma
{
    return num + num2;
}

double resta (double num, double num2) //Función resta
{
    return num - num2;
}

double producto (double num, double num2) //Función producto
{
    return num * num2;
}

double division (double num, double num2) //Función división
{
    return num / num2;
}

int main()
{
    cout << "Suma" << endl;
    cout << "Suma de los números 5 + 5 = " << suma(5,5) << endl;
    cout << "Suma de los números 10 + 15 = " << suma(10,15) << endl;

    cout << endl << "Resta" << endl;
    cout << "Resta de los números 8 - 5 = " << resta(8,5) << endl;
    cout << "Resta de los números 15 - 7 = " << resta(15,7) << endl;

    cout << endl << "Producto" << endl;
    cout << "Producto de los números 7 x 5 = " << producto(7,5) << endl;
    cout << "Producto de los números 10 x 10 = " << producto(10,10) << endl;

    cout << endl << "División" << endl;
    cout << "División de los números 19 / 3 = " << division(19,3) << endl;
    cout << "División de los números 5 / 7 = " << division(5,7) << endl;
    return 0;
}