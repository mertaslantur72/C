#include<stdio.h>

int main() {
	
int sayilar[5] = {1,2,3,4,5,};
	
int *p = &sayilar[0];  //*p = sayilar; da diyebilirdik c�nki ayn� �ey
printf("%u\n",p[0]);
printf("%u",*(p+1));
	
// *(p+1) yerine p[1] yazabilirsin, ayn� �ey anlam�na geliyor bunlar. Her ikisi de diziin o indeksteki elema�n� basar
	
/* p ve (p+1) bast���nda biliyoruz ki p nin ve (p+1) in i�eri�ini bas�yor.
bu iki ��kt� aras�nda ise 10 luk sistemde 4 fark oluyor. Bunun sebebi ise
int veri tipinin 4 byte olmas� sonucudur.*/
	
	
	
	
	
	return 0;
}
