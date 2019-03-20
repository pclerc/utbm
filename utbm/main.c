//
//  main.c
//  utbm
//
//  Created by Pierre on 06/03/2019.
//  Copyright © 2019 Pierre. All rights.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int demander(int plusPetit, int plusGrand, int erreur, char nomVariable[]);
float cylindre(int hauteur, int rayon, char surfaceOuVolume[]);

int main(int argc, const char * argv[]) {
    
    int hauteur = demander(0, 200, 0, "hauteur"), rayon = demander(0,1000,1, "rayon");
    printf("Le cylindre a une volume de %0.2f cm^3\net une surface de %0.2f cm^2.\n", cylindre(hauteur, rayon, "volume"), cylindre(hauteur, rayon, "surface"));
    return 0;
}

float cylindre(int hauteur, int rayon, char surfaceOuVolume[])
{
    float resultat = 0;
    if (strcmp(surfaceOuVolume, "surface") == 0)
        { resultat = 2 * M_PI * rayon * (rayon + hauteur); }
    else
        { resultat = M_PI * pow(rayon, 2) * hauteur; }
    return resultat;
}

int demander(int plusPetit, int plusGrand, int erreur, char nomVariable[])
{
    int valeur;
    printf("Donnez un(e) %s entre %d et %d.\n", nomVariable, plusPetit, plusGrand);
    scanf("%d", &valeur);
    while (valeur < plusPetit || valeur > plusGrand)
    {
        if (erreur)
        {
            printf("Vous devez indiquer un(e) %s entre %d et %d !\n", nomVariable, plusPetit, plusGrand);
        }
        scanf("%d", &valeur);
    }
    return valeur;
}


