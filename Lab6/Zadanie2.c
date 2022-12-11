#include <stdio.h>

int NWD(int a,int b)
{
    int wynik;

    if (a==b){
        return a;
    }
    else if (a>b){
        wynik = NWD(a-b,b);
        return wynik;
    }
    else{
        wynik = NWD(a,b-a);
        return wynik;
    }
}

int main(){
    int a,b;
    printf("Wpisz 1 liczbe: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbe: ");
    scanf("%d",&b);
    printf("NWD(%d,%d) = %d\n",a,b, NWD(a,b));
}