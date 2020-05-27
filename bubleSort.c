#include <stdio.h>

// Funcion que hace swap a dos dirreciones enteras de memoria
void cambiar_pos(int *n1, int *n2)
{
    // Almacenar un cambio
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// Implementacion del algoritmo de bubble sorrt
void bubbleSort(int vector_entrada[], int n)
{
    // Para que no lo calcule cada vez que entra al ciclo
    int tamano = n - 1;

    // Por cada valor del arreglo
    for (int i = 0; i < tamano; i++)
    {
        int ciclos = n - i - 1;

        // Recorriendo, menos los ultimos porque
        // esos ya estan ordenados
        for (int j = 0; j < ciclos; j++)
        {

            // Hacer swap en caso de que dos valores esten en desorden
            if (vector_entrada[j] > vector_entrada[j + 1])
            {
                cambiar_pos(&vector_entrada[j], &vector_entrada[j + 1]);
            }
        }
    }
}