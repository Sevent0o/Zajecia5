#include <stdio.h> 
main() 
{ 

int W,K;
printf("Podaj ilosc wierszy: \n");
scanf("%d",&W);
printf("Podaj ilosc kolumn: \n");
scanf("%d",&K);
int tab[K][W]; 
 
int i,j,h,k;

printf("Wprowadz liczby: \n"); 

for(i=0; i<W; i++) 

{ for(j=0; j<K; j++) 
 
scanf("%d",&tab[i][j]); 
 
} 
printf("\nMACIERZ: "); 
for(h=0; h<W; h++) 
 
{ printf("\n"); 
for(k=0; k<K; k++) 

printf("%d ",tab[h][k]); 

}  
return 0; 
}
