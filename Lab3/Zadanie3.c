#include <stdio.h>

int main() {
    int a,b;
    printf("Wpisz 1 liczbe: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbe: ");
    scanf("%d",&b);
    if(a>b)
        printf("Wieksza liczba to: %d\n",a);
    else if(b>a)
        printf("Wieksza liczba to: %d\n",b);
    return 0;
}