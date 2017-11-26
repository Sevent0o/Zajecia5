#include <stdio.h>
#include <stdlib.h>
#define rozmiar 10

void reverse_table(int tab[], int n)
{
for (int i=9;i>=0;i--)
printf("%d\n",*(tab+i));
}
int main(void)
{
  int tab[rozmiar],a,pomocnicza;
  for(a=0;a<10;a++)
  {
    printf("Podaj %d element tablicy:\n",a+1);
    scanf("%d",&pomocnicza);
    tab[a]=pomocnicza;
  }
  reverse_table(tab,10);
  return EXIT_SUCCESS;
}
