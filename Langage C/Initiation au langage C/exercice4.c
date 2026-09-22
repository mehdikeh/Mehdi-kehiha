
#include <stdio.h>

int main(void)
{
    int nombre1;
    int nombre2;
    int somme;
    int difference;
    int produit;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &nombre2);

    somme = nombre1 + nombre2;
    difference = nombre1 - nombre2;
    produit = nombre1 * nombre2;

    printf("Somme : %d\n", somme);
    printf("Difference : %d\n", difference);
    printf("Produit : %d\n", produit);

    return 0;
}

