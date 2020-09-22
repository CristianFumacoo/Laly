#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"

int main()
{
    eEmpleado empleado;
    eEmpleado empleados[TAM];
    int opcion;
    Inicializar(empleados);
    do
    {
        printf("1.ingresar un empleado.\n");
        printf("2.Modificar.\n");
        printf("3.Borrar.\n");
        printf("4. Mostrar.\n");
        printf("5. Salir.\n");
        printf("Opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            CrearUnEmpleado(empleados);
            system("pause");
            system("cls");
            break;
        case 3:
            BorrarEmpleado(empleados);
            system("pause");
            system("cls");
            break;
        case 4:
            MostrarEmpleados(empleados);
            system("pause");
            system("cls");
            break;

        }


    }
    while(opcion!=5);




    return 0;
}
