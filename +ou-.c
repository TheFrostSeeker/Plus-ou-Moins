#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()

{

    const int MIN = 1;
    int nombreMystere = 0;
    int nombreEntre = 0;
    int modeDeJeux = 0;
    int compteurCoups = 0;
    int nombreMax = 100;
    int continuerPartie = 1;


    printf("Choisissez le nombre maximum a trouver:\n");
    scanf("%d", &nombreMax);


    while (modeDeJeux < 1 || modeDeJeux > 2)
    {
    printf("Choisissez le nombre de joueurs:\n\n");
    printf("Mode 1 joueur Tapez 1\n");
    printf("Mode 2 joueurs Tapez 2\n");
    scanf("%d", &modeDeJeux);
    }


    switch (modeDeJeux)
    {

/////////////////////////////// 2 Joueurs \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    case 2:
        printf("\nPartie 2 joueurs\n");

        while (continuerPartie)
        {
            do
            {
            printf("Joueur 1, choisissez un nombre entre %d et %d:\n", MIN, nombreMax);
            scanf("%d", &nombreMystere);
            system("cls");
            }
            while (nombreMystere < MIN || nombreMystere > nombreMax);

            do
            {
            printf("Quel est le nombre choisis par le joueur 1 ?  :");
            scanf("%d", &nombreEntre);
            compteurCoups++;

                if (nombreEntre > nombreMystere)
                {
                printf("C'est moins - !\n\n");
                }

                else if (nombreEntre < nombreMystere)
                {
                printf("C'est plus + !\n\n");
                }

                else if(nombreEntre == nombreMystere)
                {
                printf("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", compteurCoups);
                }

            }
            while (nombreEntre != nombreMystere);

        compteurCoups = 0;
        printf("Voulez-vous faire une nouvelle partie?\n\n");
        printf("0 = Non =/ \n");
        printf("1 = Oui !! \n");
        scanf("%d", &continuerPartie);
        }
        break;

///////////////////////// 1 Joueur \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    case 1:
        printf("\nPartie 1 joueur\n\n");
        while (continuerPartie)
        {
        srand(time(NULL));
        nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;
        printf("Choisissez un nombre entre %d et %d:\n", MIN, nombreMax);
            do
            {
            printf("Le nombre mystere est   :");
            scanf("%d", &nombreEntre);
            compteurCoups++;

                if (nombreEntre > nombreMystere)
                {
                printf("C'est moins - !\n\n");
                }

                else if (nombreEntre < nombreMystere)
                {
                printf("C'est plus + !\n\n");
                }

                else if(nombreEntre == nombreMystere)
                {
                printf("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", compteurCoups);
                }

            }
            while (nombreEntre != nombreMystere);

        compteurCoups = 0;
        printf("Voulez-vous faire une nouvelle partie ?\n\n");
        printf("1 = Oui !!\n");
        printf("0 = Non =/ \n");
        scanf("%d", &continuerPartie);
        }
        break;
    }

return 0;
}
