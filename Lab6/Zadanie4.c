#include <stdio.h>

int fib(int a)
{
    if (a<3){
        return 1;
    }
    return fib(a-2)+fib(a-1);
}

int main(){
    int a;
    printf("Podaj nr wyrazu ciagu: ");
    scanf("%d",&a);
    printf("fib(%d) = %d\n",a,fib(a));
}