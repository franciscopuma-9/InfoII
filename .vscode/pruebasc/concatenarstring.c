#include <stdio.h>
#include <string.h>

/*
int main(void){

    char palabra1[30];
    char palabra2[30];
    printf("Ingrese primera palabra: ");
    gets(palabra1);
    printf("Ingrese segunda palabra: ");
    gets(palabra2);
    int finpal1 = strlen(palabra1);
    int x = 0;
    while (palabra2[x] != '\0'){
        palabra1[finpal1 + x] = palabra2[x];
        x++;
    }
    palabra1[x+finpal1] = '\0';
    printf("%s\n%s", palabra1, palabra2);
    

    return 0;
}
*/
/*
int main(void){

    char palabra1[30];
    char palabra2[30];
    printf("Ingrese primera palabra: ");
    gets(palabra1);
    printf("Ingrese segunda palabra: ");
    gets(palabra2);
    int finpal1 = strlen(palabra1);
    int x;
    for (x = 0; x < strlen(palabra2);x++){
        palabra1[finpal1 + x] = palabra2[x];
    }
    palabra1[x+finpal1] = '\0';
    printf("%s\n", palabra1);
    

    return 0;
}
*/
int main(void){

    char palabra1[30];
    char palabra2[30];
    printf("Ingrese primera palabra: ");
    gets(palabra1);
    printf("Ingrese segunda palabra: ");
    gets(palabra2);
    int finpal1 = 0;
    int x = 0;
    while (palabra1[x] != '\0')
    {
        finpal1++;
        x++;
    }    
    x = 0;
    while (palabra2[x] != '\0'){
        palabra1[finpal1 + x] = palabra2[x];
        x++;
    }
    palabra1[x+finpal1] = '\0';
    printf("%s\n", palabra1);
    

    return 0;
}