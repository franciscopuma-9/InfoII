#include <stdio.h>

// char* sexo(char letra){ //para poder devolver una cadena tiene que ser un puntero a char
//     if (letra == 'h' || letra == 'H'){
//         return "hombre";
//     }
//     else
//     {
//         if (letra == 'm' || letra == 'M') {
//             return "mujer";
//         }
//         else
//         {
//             return "Esta mal ingresado el caracter";
//         }
        
//     }
// }


// int main(){

//     char letra;
//     printf("Ingrese caracter: ");
//     scanf("%c", &letra);
//     printf("%s", sexo(letra));
//     return 0;
// }

void sexo(char letra){
    if (letra == 'h' || letra == 'H'){
        printf("hombre");
    }
     else
     {
       if (letra == 'm' || letra == 'M') {
           printf("mujer");
       }
        else
        {
            printf("Esta mal ingresado el caracter");
        }
        
    }
 }


int main(){

    char letra;
    printf("Ingrese caracter: ");
    scanf("%c", &letra);
    sexo(letra);
    return 0;
}