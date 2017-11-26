#include <stdio.h>

void swap_integer(int *a, int *b)
{
   int temp;

   temp = *b;
   *b   = *a;
   *a   = temp;
}


int main()
{
   int x, y;

   printf("Podaj liczby:\n");
   scanf("%d%d",&x,&y);

   printf("Przed zamiana\nx = %d\ny = %d\n", x, y);

   swap_integer(&x, &y);

   printf("Po zamianie\nx = %d\ny = %d\n", x, y);

   return 0;
}
