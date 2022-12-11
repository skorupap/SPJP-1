#include <stdio.h>

long silnia(int a)
{
    if (a<2){
        return 1;
    }
    int wynik = a*silnia(a-1);
    return wynik;
}

int main(){
    int a;
    printf("Wpisz liczbe: ");
    scanf("%d",&a);
    printf("%d! = %ld\n",a, silnia(a));
}