#include <stdio.h>

int global = 5;
int address();

int main(){
    int local = global;

    printf("Adres lokalnej zmiennej: %p\nAdres globalnej zmiennej: %p\n", &local, &global);
    address(local,global);
}

int address(int a, int b){
    printf("Adres 1 zmiennej: %p \nAdres 2 zmienniej: %p\n", &a, &b);
}