// Estudiante: Cifuentes González Elian
// Fecha de entrega: 09/06/2024
// Curso: 1ro de TI

/*6) Diseñe la función que recibe como parámetro un entero y devuelve la cantidad de cifras de este entero.
Por ejemplo 123, tiene 3 cifras
Por ejemplo 12300, tiene 5 cifras
Por ejemplo 5660, tiene 4 cifras*/

#include <iostream>

using namespace std;

int contarCifras(int cont, int num)
{
    int numero = num;
    while (num != 0)
    {
        num /= 10;
        cont++;
    }
    return cont;
}

int main()
{
    int numero;

    cout << "Introduce un número entero: ";
    cin >> numero;

    int cifras = contarCifras(0, numero);
    cout << "El número " << numero << " tiene " << cifras << " cifras." << endl;

    return 0;
}
