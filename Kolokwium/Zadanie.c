#include <stdio.h>

//Zadeklarowanie zmiennej globalnej 'n'
int n=0;

//Funkcja sprawdzajaca czy w tablicy jest miejsce na nowy element
void sprawdz_miejsce(){
  if (n==20) {
    printf("Nie ma juz miejsca w tablicy!\n");
    return;
  }
  printf("Jest miejsce w tablicy.\n");
}

//Funkcja wstawiajaca cyfre do tablicy
void wstaw(int* tab, int wartosc){
  tab[n++] = wartosc;
}

//Funkcja usuwajaca element o podanym indeksie z tablicy
void usun_element(int* tab, int indeks){
  if (indeks<0 || indeks>=n) {
    printf("Nieprawidlowy indeks elementu!\n");
    return;
  }
// Przesuwamy wszystkie elementy po usuwanym o jedno miejsce w lewo
  for (int i = indeks; i<n-1; i++) {
    tab[i] = tab[i+1];
  }
  n--;
}

// Funkcja zwracająca sumę kwadratów liczb znajdujących się w tablicy
int suma_kwadratow(int* tab){
  int suma=0;
  for (int i=0; i<n; i++){
    suma += tab[i] * tab[i];
  }
  return suma;
}

//Funkcja wypisujaca elementy tablicy
void wypisz(int* tab, int n){
  if (n==0){
    printf("Tablica jest pusta!\n");
  }
  else{
    for(int a=0; a<n; a++){
      printf("Element %d z tablicy: %d",a,tab[a]);
    }
  }
}

int main(){
    int tab[20];
    char wybor;

    
    while (1) {
    printf("Wybierz akcję:\n  (w) Wypisz elementy tablicy\n  (d) Dodaj nowy element do tablicy\n  (D) Dodaj wiele elementow do tablicy\n  (u) Usun element z tablicy\n  (s) Oblicz sume kwadratów elementow tablicy\n  (e) Zakoncz dzialanie programu\n");
    scanf("%c",&wybor);

    switch(wybor){
    case 'e': return 0;
    case 'w': wypisz(tab, n); break;
    case 'd': printf("Wpisz liczbe do wsatwienia: "); int wstaw_e; scanf("%d", &wstaw_e); wstaw(tab, wstaw_e); break;
    case 'D':
        printf("Ile elementow chcesz dodac: ");
        int ile;
        scanf("%d", &ile);
        for (int i = 0; i < ile; i++)
        {
            printf("Wpisz liczbe do wsatwienia: "); 
            int wstaw_e; 
            scanf("%d", &wstaw_e);
            wstaw(tab, &wstaw_e);
        }
        break;
    case 'u':
        printf("Podaj indeks elementu do usunięcia: ");
        int i;
        scanf("%d", &i);
        usun_element(tab, i);
        break;
    case 's':
        int suma = suma_kwadratow(tab);
        if (suma == -1)
        {
            printf("Blad: tablica jest pusta\n");
        }
        else
        {
            printf("Suma kwadratow elementow tablicy wynosi %d\n", suma);
        }
        break;
     default:
        printf("Blad: nieprawidlowa opcja\n");
    }
    }
}