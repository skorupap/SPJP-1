#include <stdio.h>

int main() {
    int a,b;
    printf("Wpisz liczbe: ");
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        b += i*i;        
    }
    printf("Suma kwadratow wynosi: %d", b);
}