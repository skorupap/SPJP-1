#include <stdio.h>

void w_tab(int *first, int *last){
    int n = last - first + 1;
    for (int i=0; i<n; i++) {
        first[i] = i + 1;
    }
}

int main(){
    int rt;
    printf("Podaj ilosc elementow w tablicy: ");
    scanf("%d",&rt);

    int tab[rt];
    w_tab(tab, tab + rt-1);
    printf("Tablica: ");
    for (int i=0; i<rt; i++) {
        printf("%d ", tab[i]);
    }
}
