#include <stdio.h>

void zamien(int* a, int* b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(){
  int x = 10;
  int y = 20;

  printf("x = %d, y = %d\n", x, y);
  zamien(&x, &y);
  printf("x = %d, y = %d\n", x, y);
}
