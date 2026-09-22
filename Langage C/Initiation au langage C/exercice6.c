#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre >= 0)
    {
        printf("Nombre positif ou nul.\n");
    }
    else
    {
        printf("Nombre negatif.\n");
    }

    return 0;
}

