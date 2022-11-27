#include <stdio.h>

int main() {
    int a,b;
    printf("Wpisz 1 liczbe: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbe: ");
    scanf("%d",&b);
    printf("Wynik dodawania: %d\n",a+b);
    printf("Wynik odejmowania: %d\n",a-b);
    printf("Wynik mnozenia: %d\n",a*b);
    printf("Wynik dzielenia: %d\n",a/b);
    printf("Reszta z dzielenia: %d\n",a%b);
    return 0;
}