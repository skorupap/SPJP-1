#include <stdio.h>

int max_zero(int *tab, int size) {
    int max = tab[0];
    int max_index = 0;

    for (int i=1; i<size; i++) {
        if (tab[i] > max) {
            max = tab[i];
            max_index = i;
        }
    }

    tab[max_index] = 0;
    return max;
}

int main() {
    int rt,n=0;

    printf("Podaj ilosc elementow w tablicy: ");
    scanf("%d",&rt);

    int tab[rt];

    for(n;n<rt;n++){
        printf("Podaj %d element: ",n+1);
        scanf("%d",&tab[n]);
    }

    int size = sizeof(tab) / sizeof(int);
    int max = max_zero(tab, size);
    printf("Najwiekszy element w tablicy: %d\n", max);

    printf("Tablica po zmianie: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
