#include <stdio.h>

int wl(int a)
{
    if (a>0){
        return a%10 + wl(a/10);
    }
}

int main(){
    int a,n=0;
    printf("Podaj ilosc liczb w tablicy: ");
    scanf("%d",&a);
    int tab[a];
    for(n;n<a;n++){
        printf("Podaj %d liczbe: ",n+1);
        scanf("%d",&tab[n]);
    }
}