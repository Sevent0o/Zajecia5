#include<stdio.h>
#include<stdlib.h>

void zamiana(int x)
{

int t[8];
int i=0;
do
{

t[i]=x%2;
x=x/2;
i++;
}
while(x!=0);
while(i>0)
{
i--;
printf("%d",t[i]);
}}
int  main()
{
  int x;
  scanf("%d", &x);
  zamiana(x);
printf("\n");

return 0;
}
