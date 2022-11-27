#include <stdio.h>

void dodawanie(int a,int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}

void odejmowanie(int a,int b)
{
    printf("%d - %d = %d\n",a,b,a-b);
}

void mnozenie(int a,int b)
{
    printf("%d * %d = %d\n",a,b,a*b);
}

void dzielenie(int a, int b)
{
    printf("%d / %d = %d\n",a,b,a/b);
}
int menu ()
{
    int k;
    printf("Menu: \n1 - dodawanie\n2 - odejmowanie\n3 - mnozenie\n4 - dzielenie\n5 - wszystkie z powyzszych\n\nWybierz: ");
    scanf("%d",&k);
    return k;
}

int main(){
    int a,b,n;
    printf("Wpisz 1 liczbe: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbe: ");
    scanf("%d",&b);
    menu_wybierz: n = menu();

    switch(n){
        case 1: dodawanie(a,b); break;
        case 2: odejmowanie(a,b); break;
        case 3: mnozenie(a,b); break;
        case 4: dzielenie(a,b); break;
        case 5: dodawanie(a,b);odejmowanie(a,b);mnozenie(a,b);dzielenie(a,b); break;
        default: printf("Wybrano niedozwolona opcje!\n"); goto menu_wybierz;
    }
    
}