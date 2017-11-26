#include <stdio.h>
#define rozmiar 10

int main () {
int ref[rozmiar];
int *wsk;
int i, indeks;
int pomocnicza;
for(i=0;i<10;i++)
{
  printf("Podaj %d element tablicy:\n",i+1);
  scanf("%d",&pomocnicza);
  ref[i]=pomocnicza;
}


for (indeks = 0, wsk = ref; indeks < 10; indeks++, wsk++)
printf("%d\n",*wsk);
return 0;
}
