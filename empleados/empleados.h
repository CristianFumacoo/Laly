#define VACIO 0
#define OCUPADO 1
#define TAM 2

typedef struct
{
    int legajo;
    float salario;
    char nombre[20];
    int isEmpty;
}eEmpleado;

void Inicializar(eEmpleado[]);

void CrearUnEmpleado(eEmpleado[]);

void MostrarEmpleados(eEmpleado[]);

void BorrarEmpleado (eEmpleado[]);


