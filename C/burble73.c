#include <stdio.h>




int main (void){
    
    int vector[5] = {3,2,15,50,1};
        

    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            if(vector[y] < vector[y+1]){
                int aux = vector[y];
                vector[y] = vector[y+1];
                vector[y+1]= aux;

            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vector[i]);
    }
    


    return 0;
}