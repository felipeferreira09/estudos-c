#include <stdio.h>

int main() {

    int R;
    printf("digite o valor que deseja saber as notas:\n");
    scanf("%d", &R);
    
    int aux = R;
    int resto = 0; 
    int cem = 0;
    int cinquenta = 0;
    int dez = 0;
    int cinco = 0;
    int um = 0;

    if (aux >= 100) { 
        cem = aux / 100;
        resto = aux % 100;
        printf("resto 100: %d\n", resto);
     }

     if (resto >= 50) {
        cinquenta = resto / 50;
        resto = resto % 50;
                printf("resto 50: %d\n", resto);

     }

      if (resto >=10) {
        dez = resto / 10;
        resto = resto % 10;
                printf("resto 10: %d\n", resto);

     }

     if (resto >=5) {
        cinco = resto / 5;
        resto = resto % 5;
                printf("resto 5: %d\n", resto);

     }

     if (resto >=1) {
        um = resto / 1;
        resto = resto % 1;
                printf("resto 1: %d\n", resto);

     }









     printf("notas de cem: %d\n", cem);
     printf("notas de cinquenta: %d\n", cinquenta);
     printf("notas de dez: %d\n", dez);
     printf("notas de cinco: %d\n", cinco);
     printf("notas de um: %d\n", um);


    return 0;
}