#include <stdio.h>
#include <string.h>

struct alumno
{
    char nombre[20];
    char direccion[20];
    char carrera[20];
    int edad;
    float promedio;
};

int main(int argc, char const *argv[])
{
    struct alumno a[5];
    char temp[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingresa los detalles del alumno %d:\n", i + 1);

        printf("Nombre: ");
        fflush(stdin);
        gets(a[i].nombre);

        printf("Direccion: ");
        fflush(stdin);
        gets(a[i].direccion);

        printf("Carrera: ");
        fflush(stdin);
        gets(a[i].carrera);

        printf("Edad: ");
        fflush(stdin);
        scanf("%d", &a[i].edad);

        printf("Promedio: ");
        fflush(stdin);
        scanf("%f", &a[i].promedio);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nDatos del alumno %d:\n", i + 1);

        puts(a[i].nombre);
        puts(a[i].direccion);
        puts(a[i].carrera);

        sprintf(temp, "%d", a[i].edad);
        puts(temp);

        sprintf(temp, "%.2f", a[i].promedio);
        puts(temp);
    }

    return 0;
}
