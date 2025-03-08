#include<stdio.h>

int main() {
	
int sayilar[5] = {1,2,3,4,5,};
	
int *p = &sayilar[0];  //*p = sayilar; da diyebilirdik cünki aynı şey
printf("%u\n",p[0]);
printf("%u",*(p+1));
	
// *(p+1) yerine p[1] yazabilirsin, aynı şey anlamına geliyor bunlar. Her ikisi de diziin o indeksteki elemaını basar
	
/* p ve (p+1) bastığında biliyoruz ki p nin ve (p+1) in içeriğini basıyor.
bu iki çıktı arasında ise 10 luk sistemde 4 fark oluyor. Bunun sebebi ise
int veri tipinin 4 byte olması sonucudur.*/
	
	
	
	
	
	return 0;
}
