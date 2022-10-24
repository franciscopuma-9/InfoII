#include <stdio.h>
#include <string.h>

int main(void){

    char nom1[20];
    char nom2[20];
    char nom3[20];
    char juntos[60];
    
    printf("Ingrese primer nombre: ");
    gets(nom1);
    printf("Ingrese segundo nombre: ");
    gets(nom2);
    printf("Ingrese tercer nombre: ");
    gets(nom3);

    if (strcmp(nom1, nom2) < 0 && strcmp(nom1, nom3) < 0){
        strcpy(juntos, nom1);
        strcat(juntos, ",");
        if (strcmp(nom2, nom3) < 0){            
            strcat(juntos, nom2);
            strcat(juntos, ",");
            strcat(juntos, nom3);

        }
        else
        {
            if (strcmp(nom3, nom2) < 0){            
                strcat(juntos, nom3);
                strcat(juntos, ",");
                strcat(juntos, nom2);
            }
        }
    }
    else
    {
        if (strcmp(nom2, nom3) < 0){
            strcpy(juntos, nom2);
            strcat(juntos, ",");
            if (strcmp(nom1, nom3) < 0){            
                strcat(juntos, nom1);
                strcat(juntos, ",");
                strcat(juntos, nom3);
            }
            else
            {
                strcat(juntos, nom3);
                strcat(juntos, ",");
                strcat(juntos, nom1);
            }
            
        }
        else
        {
            strcpy(juntos, nom3);
            strcat(juntos, ",");
            if (strcmp(nom1, nom2) < 0){            
                
                strcat(juntos, nom1);
                strcat(juntos, ",");
                strcat(juntos, nom2);
            }
            else
            {
                strcat(juntos, nom2);
                strcat(juntos, ",");
                strcat(juntos, nom1);
            }
        }
        
    }
    printf("%s",juntos);

    return 0;
}