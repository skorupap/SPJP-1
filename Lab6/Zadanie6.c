#include <stdio.h>

long sc(int a)
{
    if (a>0){
        return a%10 + sc(a/10);
    }
}

int main(){
    int a;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    printf("Suma cyfr liczby %d = %ld\n",a,sc(a));
}