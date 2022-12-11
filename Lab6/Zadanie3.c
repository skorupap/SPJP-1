#include <stdio.h>

int ciag(int a)
{
    if (a==1){
        printf("%d",a);
    }
    else{
        printf("%d,",a);
        ciag(a-1);
    }
}

int main(){
    int a;
    printf("Wpisz liczbe: ");
    scanf("%d",&a);
    ciag(a);
}