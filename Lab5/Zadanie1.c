#include <stdio.h>
#include <unistd.h>

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
    printf("\nMenu: \n1 - dodawanie\n2 - odejmowanie\n3 - mnozenie\n4 - dzielenie\n5 - wszystkie z powyzszych\n\nWybierz: ");
    scanf("%d",&k);
    return k;
}

void red()
{
    printf("\033[1;31m");
}

void green()
{
    printf("\033[0;32m");
}

void reset()
{
    printf("\033[0m");
}

int main(){
    int a,b, n;
    printf("Wpisz 1 liczbe: ");
    scanf("%d",&a);
    printf("Wpisz 2 liczbe: ");
    scanf("%d",&b);
    menu_wybierz: n = menu();

    switch(n){
        case 1: green(); dodawanie(a,b); break;
        case 2: green(); odejmowanie(a,b); break;
        case 3: green(); mnozenie(a,b); break;
        case 4: green(); dzielenie(a,b); break;
        case 5: green(); dodawanie(a,b);odejmowanie(a,b);mnozenie(a,b);dzielenie(a,b); break;
        default: red();printf("\nWybrano niedozwolona opcje!\n"); reset(); sleep(1); goto menu_wybierz;
    }
    
}