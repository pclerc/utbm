//
//  main.c
//  utbm
//
//  Created by Pierre on 06/03/2019.
//  Copyright © 2019 Pierre. All rights.
//

#include <stdio.h>
#include <math.h>
/*
int main(int argc, const char * argv[]) {
    
    int a = 0, b = 0, booleen = 0;
    float real;
    printf("Donnez moi 2 entiers, différent de 0.\n");
    
    do
    {
        if (booleen != 0)
        {
            printf("Vous devez mettre un entier different de 0 !\n");
            
        }
        
        printf("Notez le 1er nombre:\n");
        scanf("%i", &a);
        printf("Le 2eme nombre:\n");
        scanf("%i", &b);
        booleen = 1;
        
    } while (a == 0 || b == 0);
    
    real = (float)a/b;
    printf("Résultat, a / b: %.1f\n", real);
    real = (float)b/a;
    printf("Resultat: b / a: %.1f\n", real);
    
    return 0;
}
*/
int main(int argc, const char * argv[])
{
    float rayon;
    printf("Donnez moi un rayon.\n");
    scanf("%f", &rayon);
    printf("Votre diametre de cercle: %.1f m^2\n", M_PI * 4 * rayon * rayon);
    printf("Votre volume de cercle: %.1f m^3\n", pow(rayon,3) * (4*M_PI)/3);
    return 0;
}

/*
int main(int argc, const char * argv[]) {
    int a, b;
    printf("Donner un nombre entier.\n");
    scanf("%i", &a);
    printf("Donner un second nombre entier.\n");
    scanf("%i", &b);
    if (a!=b)
    {
        if (a<b)
        {
            printf("a est plus petit que b.\n");
        }
        else
        {
            printf("b est plus petit que a.\n");
        }
    }
    else
    {
        printf("a est egal a b.\n");
    }
    return 0;
}
*/
