#include <stdio.h>

int main() {
    unsigned long int a,b,c=1;
    int n;
    printf("Wpisz podstawe potegi: ");
    scanf("%ld",&a);
    printf("Wpisz wykladnik potegi: ");
    scanf("%ld",&b);
    for(int n; n<b; n++){
        c = c*a;
    }
    printf("%ld ^ %ld = %ld",a,b,c);
}