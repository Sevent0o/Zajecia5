#include<stdio.h>

int silnia (int k)//definicja funkcji silnia
{
if(k<=1)
return(1);
else
return(k*silnia(k-1));
}
int main()
{
  int s,i;
int dwanascie=12;
for (i=1;i<=12;i++)
{

s=silnia(i);
printf("Silnia z %d to %d\n",i,s);
}
return 0;
}
