#include <stdio.h>

int main(void) {
    int nprodotti,a;
    float prezzo;
    float somma;
    printf("Inserire il numero di prodotti: ");
    scanf("%d",&nprodotti);
    for(a=1;a<=nprodotti;a++) {
        printf("Inserire il prezzo: ");
        scanf("%f",&prezzo);
        somma += prezzo;
    }


    printf("il totale speso e' : %f\n",somma);
}
