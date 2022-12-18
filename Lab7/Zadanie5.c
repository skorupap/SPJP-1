#include <stdio.h>

void sort(int *a, int *b, int *c){
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int a,b,c;
    printf("Wpisz 1 liczbe: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbe: ");
    scanf("%d",&b);
    printf("Wpisz 3 liczbe: ");
    scanf("%d",&c);

    sort(&a, &b, &c);
    printf("Liczby po sortowaniu: %d %d %d\n", a, b, c);
}