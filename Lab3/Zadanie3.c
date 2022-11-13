#include <stdio.h>

int main() {
    int a,b;
    printf("Wpisz 1 liczbę: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbę: ");
    scanf("%d",&b);
    if(a>b)
        printf("Większa liczba to: %d\n",a);
    else if(b>a)
        printf("Większa liczba to: %d\n",b);
    return 0;
}