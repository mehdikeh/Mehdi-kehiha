#include <stdio.h>

int main(void)
{
    int nombre;
    int compteur;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (compteur = 1; compteur <= 10; compteur++)
    {
        printf("%d x %d = %d\n", nombre, compteur, nombre * compteur);
    }

    return 0;
}

