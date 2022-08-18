#include <stdio.h>


int main (){

    int vec1[4], vec2[4], vectotal[4];
    int x;

    for(x = 0; x < 4;x++){
        printf("Ingrese valor: ");
        scanf("%d", &vec1[x]);
    }
    for(x = 0; x < 4;x++){
        printf("Ingrese valor: ");
        scanf("%d", &vec2[x]);
    }
    for(x = 0; x < 4;x++){
        vectotal[x] = vec1[x] + vec2[x];

    }
    for(x = 0; x < 4;x++){
        printf("%d ",vectotal[x]);
        
    }
    



    return 0;
}