#include<stdio.h>

int doskonala (int k)
{
int suma_dziel=0;
int i=1;
while(i<=k/2)
{
  if(k%i==0)
  {
    suma_dziel=suma_dziel+i;
    i++;
  }
  else
  {
    i++;
  }
}


  if(k==suma_dziel)
  {
    return 1;
  }
  else
  {
    return 0;
  }

}

int mniejsze_n (int b)
{
  int i;
  for(i=0;i<b;i++)
  if(doskonala(i)==1)
  {

  printf("%d \n",i);
}
i++;
}





int main()
{
int s,f;
printf("podaj liczbe: \n");
scanf("%d",&s);

if(doskonala(s)==1)
{
  printf("jest ok\n");
}
else
{
  printf("nie jest ok\n");
}
int a,c;
printf("Podaj liczbe:\n");
scanf("%d",&a);
c=mniejsze_n(a);
printf("%d",c);
return 0;
}
