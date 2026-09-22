#include <stdio.h>

int main(void)
{
    float note1;
    float note2;
    float note3;
    float moyenne;

    printf("Entrez la premiere note : ");
    scanf("%f", &note1);

    printf("Entrez la deuxieme note : ");
    scanf("%f", &note2);

    printf("Entrez la troisieme note : ");
    scanf("%f", &note3);

    moyenne = (note1 + note2 + note3) / 3.0;

    printf("La moyenne est : %.2f\n", moyenne);

    return 0;
}

