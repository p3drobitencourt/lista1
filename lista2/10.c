#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

int verificador(int quadrantes[500][500]){
    int i, j, cont = 0; 
    
    for (i = 0; i < 500; i++) {
        for (j = 0; j < 500; j++) {
            if (quadrantes[i][j] > 1) {
                cont = 1; 
                break;
            }
        }
        if (cont) { 
            break;
        }
    }

    return cont;
}

int main(){
    int quadrantes[500][500] = {{0}}; 
    int x, y, registros, i, cont;

    scanf("%d", &registros);

    for(i = 0; i < registros; i++){
        scanf("%d%d", &x, &y);
        quadrantes[x][y]++;	
    }

    cont = verificador(quadrantes);

    printf("resposta: %d\n", cont);

}

