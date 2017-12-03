#include<stdio.h>
#include<stdlib.h>
#define rozmiar 10

int min(int tab[], int *a)
{
	int minimum= tab[0];
	int i;
	for(i=1; i<10; i++)
	{
		if(tab[i]<minimum)
		{
			minimum=tab[i];
		}
	}
	printf("Najmniejszy: %d \n", minimum);
	*a=minimum;
}

int max(int tab[], int *b)
{
        int maximum= tab[0];
        int i;
        for(i=1; i<10; i++)
        {
                if(tab[i]>maximum)
                {
			maximum=tab[i];
		}
	}
        printf("Najwiekszy: %d \n", maximum);
	*b=maximum;
}

int roznica(int *a, int *b)
{
	int wynik= *b-*a;
	if(*a>=0){
	
	printf("ROZNICA: %d-%d=%d\n", *b, *a, wynik);
}
else
{
printf("ROZNICA: %d-(%d)=%d\n", *b, *a, wynik);	
}
}

int main()
{
	int tab[rozmiar];
	int i;
	for(i=0; i<10; i++)
	{	printf("Podaj %d element tablicy:", i+1);
		scanf("%d", &tab[i]);
		
	}

	int l, k;
	min(tab, &l);
	max(tab, &k);
	roznica(&l, &k);

	return 0;
}
