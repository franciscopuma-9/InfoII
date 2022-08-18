#include <stdio.h>

struct tiempo
{
    int hh;
    int mm;
    int ss;
};
int main (void){
    int n;
    printf("Cuantos valores quiere ingresar: ");
    scanf("%d", &n);
    struct tiempo vec[n];    
    for (int x = 0; x < n;x++){
        printf("Ingrese hora: ");
        scanf("%d", &vec[x].hh);
        printf("Ingrese minutos: ");
        scanf("%d", &vec[x].mm);
        printf("Ingrese segundos: ");
        scanf("%d", &vec[x].ss);
    }
    int sumahh = vec[0].hh;
    int sumamm = vec[0].mm;
    int sumass = vec[0].ss;

    for(int x = 1; x < n; x++){
        sumahh += vec[x].hh;
        sumamm += vec[x].mm;
        sumass += vec[x].ss;        
    }
    if (sumass >= 60){
        sumamm += (sumass/60);
        sumass = sumass % 60;
    }
    if (sumamm >= 60){
        sumahh += (sumamm/60);
        sumamm = sumamm % 60;
    }
    printf("%d:%d:%d", sumahh, sumamm, sumass);
    return 0;
}
