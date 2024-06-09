// Estudiante: Cifuentes González Elian
// Fecha de entrega: 05/06/2024
// Curso: 1ro de TI

/*7)  Una función recibe 3 enteros. El primero indica la cantidad de números aleatorios que la función debe generar;
el segundo y el tercero indican los límites inferior y superior dentro de los cuales se debe generar cada número.
La tarea de esta función será la de retornar la sumatoria de esos números generados.
Por ejemplo si la llamada a la función es: SumaNumAleatorios(100, 45, 80), se entiende que se van a sumar 100 números aleatorios,
y que cada número está en el rango entre 45 y 80*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar números aleatorios y calcular su sumatoria
int sumatoriaNumerosAleatorios(int num, int liminfer, int limsup)
{
    srand(time(NULL));

    int suma = 0;
    for (int k = 0; k < num; ++k)
    {
        int numeroAleatorio = rand() % (limsup - liminfer + 1) + liminfer;
        suma += numeroAleatorio;
    }
    return suma;
}

int main()
{

    int suma = sumatoriaNumerosAleatorios(100, 45, 80);
    cout << "La sumatoria de los numeros aleatorios generados es: " << suma << endl;

    return 0;
}
