#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv)
{

    // Inicializar el entorno MPI
    MPI_Init(NULL, NULL);

    // Obtener el número de procesos
    int talla_mundo;
    MPI_Comm_size(MPI_COMM_WORLD, &talla_mundo);

    // Obtener el rango del procesador
    int rango_en_mundo;
    MPI_Comm_rank(MPI_COMM_WORLD, &rango_en_mundo);

    // Obtener el nombre del procesador
    char nombre_procesador[MPI_MAX_PROCESSOR_NAME];
    int talla_nombre;
    MPI_Get_processor_name(nombre_procesador, &talla_nombre);

    // Mostrar saludo
    printf("Hola mundo desde %s, con rango %d de un total de %d procesadores.\n", nombre_procesador, rango_en_mundo, talla_mundo);

    // Finalizar el entorno MPI
    MPI_Finalize();
}
