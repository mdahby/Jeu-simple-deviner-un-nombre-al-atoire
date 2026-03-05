#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreAleatoire = 0 , nombreTentatives = 0 , nombreEnter ;
    const int MAX=100 , MIN=0 ;
    int niveau ;

    srand(time(NULL));
    nombreAleatoire = (rand() % (MAX - MIN +1 )) + MIN ;

    printf("l'ordinateur a choisi un nombre entre 0 et 100 :\n");
    printf("Choisissez le niveau de difficulte : (1: Facile (30 essais) 2: Moyen (20 essais) 3: Difficile (10 essais): \n");
    scanf("%d",&niveau);

    switch(niveau)
    {

case 1:

     do{
            nombreTentatives++ ;
            printf("Quel est ce nombre ? \n ");
            scanf("%d",&nombreEnter);

            if (nombreAleatoire > nombreEnter)
                printf("C'est plus ! \n");

            else if (nombreAleatoire < nombreEnter)
                printf("C'est moins ! \n");

            else
            {
                printf("Felicitations ! Vous avez trouve la solution en %d coups !\n",nombreTentatives);
                break;
            }

     }while(nombreTentatives < 30);

 if (nombreTentatives >= 30) {
        printf("Game Over ! . Le nombre est %d.\n", nombreAleatoire);
    }

     break;

case 2:

     do{
            nombreTentatives++ ;
            printf("Quel est ce nombre ? \n ");
            scanf("%d",&nombreEnter);

            if (nombreAleatoire > nombreEnter)
                printf("C'est plus ! \n");

            else if (nombreAleatoire < nombreEnter)
                printf("C'est moins ! \n");

            else
            {
                printf("Felicitations ! Vous avez trouve la solution en %d coups !\n",nombreTentatives);
                break;
            }

     }while(nombreTentatives < 20);

 if (nombreTentatives >= 20) {
        printf("Game Over ! . Le nombre est %d.\n", nombreAleatoire);
    }

     break ;

case 3:

     do{
            nombreTentatives++ ;
            printf("Quel est ce nombre ? \n ");
            scanf("%d",&nombreEnter);

            if (nombreAleatoire > nombreEnter)
                printf("C'est plus ! \n");

            else if (nombreAleatoire < nombreEnter)
                printf("C'est moins ! \n");

            else
            {
                printf("Felicitations ! Vous avez trouve la solution en %d coups !\n",nombreTentatives);
                break;
            }

     }while(nombreTentatives < 10);

 if (nombreTentatives >= 10) {
        printf("Game Over ! . Le nombre est %d.\n", nombreAleatoire);
    }

    break ;

}

    return 0;
}
