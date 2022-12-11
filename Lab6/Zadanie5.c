#include <stdio.h>

int dtb(int a)
{
    if (a>0){
        dtb(a/2);
        printf("%d",a%2);
    }
}

int main(){
    int a;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    printf("Postac binarna liczby %d = ",a);
    dtb(a);
}