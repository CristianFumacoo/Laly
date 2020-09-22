#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"

void Inicializar(eEmpleado empleados[])
{
    for(int i=0; i<TAM; i++)
    {
        empleados[i].isEmpty = VACIO;
    }
}

void CrearUnEmpleado(eEmpleado lista[])
{
    int encontro = 0;

    for(int i=0; i<TAM; i++)
    {
        if(lista[i].isEmpty == VACIO)
        {
            printf("Ingrese un legajo: ");
            scanf("%d", &lista[i].legajo);

            printf("Ingrese un salario: ");
            scanf("%f", &lista[i].salario);

            printf("Ingrese un nombre: ");
            fflush(stdin);
            scanf("%[^\n]", lista[i].nombre);

            lista[i].isEmpty = OCUPADO;
            encontro = 1;
            printf("Se creo correctamente.\n");
            break;
        }
    }
    if(encontro == 0)
    {
        printf("La lista esta llena.\n");
    }
}

void MostrarEmpleados(eEmpleado lista[])
{
    for(int i=0; i<TAM; i++)
    {
        if(lista[i].isEmpty != VACIO)
            printf("Legajo: %d\t Salario: %f\t Nombre: %s \n", lista[i].legajo,lista[i].salario,lista[i].nombre);
    }
}

void BorrarEmpleado(eEmpleado lista[])
{
    int index;
    int sePudo = 0;

    printf("Que empleado quiere borrar: \n");
    MostrarEmpleados(lista);
    printf("Ingrese el legajo del empleado a borrar: ");
    scanf("%d", &index);

    for(int i=0; i<TAM; i++)
    {
        if(lista[i].legajo == index)
        {
            lista[i].isEmpty = VACIO;
            printf("Se borro correctamente.\n");
            sePudo = 1;
        }
    }

    if(sePudo == 0)
    {
        printf("Legajo incorrecto.");
    }
}
