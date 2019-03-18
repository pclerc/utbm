//
//  main.c
//  utbm
//
//  Created by Pierre on 06/03/2019.
//  Copyright © 2019 Pierre. All rights.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int n, nombrePremier, div, nombreATester;
    printf("Vous voulez combien de nombre premiers ?\n");
    scanf("%d", &n);
    printf("Voici les %d 1er nombre premiers.\n",n);
    printf("2,3,5,7,11");
    
    nombrePremier = 5;
    nombreATester = 11;
    
    do
    {
        nombreATester = nombreATester + 2;
        div = 3;
        
        while ((nombreATester % div != 0)  && (div < sqrt(nombreATester)))
        {
            div = div + 2;
        }
        
        if (nombreATester % div != 0)
        {
            printf(",%d",nombreATester);
            nombrePremier ++;
        }
    } while (nombrePremier < n);
    
    return 0;
}

