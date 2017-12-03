#include <stdio.h> 
main() 
{ 

int W,K;
printf("Podaj ilosc wierszy: \n");
scanf("%d",&W);
printf("Podaj ilosc kolumn: \n");
scanf("%d",&K);
int macierz[W][K]; 
int macierzT[K][W];
 
int i,j,h,k,X,Y;

printf("Wprowadz liczby: \n"); 

for(i=0; i<W; i++) 

{ for(j=0; j<K; j++) 
 
scanf("%d",&macierz[i][j]); 
 
} 
for(X=0;X<W;X++)
{
	for(Y=0;Y<K;Y++)
	macierzT[Y][X]=macierz[X][Y];
}
//wyswietla macierz normalna
printf("\nMACIERZ: "); 
for(h=0; h<W; h++) 
 
{ printf("\n"); 
for(k=0; k<K; k++) 

printf("%d ",macierz[h][k]); 

}  
//wyswietla nowa macierz
printf("\nNOWA MACIERZ: "); 
for(h=0; h<K; h++) 
 
{ printf("\n"); 
for(k=0; k<W; k++) 

printf("%d ",macierzT[h][k]); 

} 
return 0; 
}
