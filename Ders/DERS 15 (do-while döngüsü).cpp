#include<stdio.h>


int main() {
	
/*	
	int n = 10;
	
	do {
		
		printf("%d\n",n);
		
		
		n--;
				
	}
	
	while(n>0);

	return 0;
	
}
*/


// 1234 say�s�n�n �nce rakamlar� toplam�n� versin sonra ka� basamkl� oldu�unu s�ylesin //

int n,hane=0,toplam=0;

printf("Sayiyi giriniz:");
scanf("%d",&n);


do {
	
	toplam +=(n%10);
	
	hane ++;
	
	n = n/10;	
	
	
}

while(n>0);

printf("Rakamlari toplami %d %d haneli",toplam,hane);


return 0;

}


/*
 toplam =+ (n%10) komutunu anlatay�m �ncelikle.
Bu komut toplam de�i�kenine her �al��t���nda n de�erinin 10 ile b�l�m�nden kalan�n� yazacak.  yani birler basama��n�.
do d�ng�s�n�n sonunda ise n say�s�n� 10'a b�lerek say�n�n bir �nceki birler basam��n� silmi� olaca��z. ( int de�er oldu�u i�in de�er virg�ll� olamaz.)
while (n >0) konutu ise n de�erinin son basama��na kadar yani her basamak i�in 1 kere �al��t�rm�� olacak.
ba�taki toplam komutu bu sebepten dolay� her �al��t���nda toplam de�erini n say�s�n�n birler basam�� kadar artt�rm�� olacak.

ad�m ad�m 1234 say�s� i�in uygulamas�
1. n 10/a b�l�n�p kalan� al�nd� sonu� 4 - toplam say�s� 0 iken 4 eklendi - hane de�eri 1 artt�r�ld� - n say�s� 10'a b�l�n�p 123 say� oldu.

2. n bu sefer 123 de�eri olarak i�lem g�r�yor- 123 10'a b�l�n�p kalan� al�nd� sonu� 3 - toplam say�s� 4 iken 3 eklendi sonu� 7 - hane de�eri 1 iken 1 daha artt� sonu� 2 - n say�s� 10'a b�l�nd� sonu� 12

3. n=12 de�eri 10'a b�l�n�p kalan� al�nd� sonu� 2 - 7 olan toplam de�erini 2 eklendi sonu� 9 - hane de�erine 1 daha eklendi sonu� 3 - n say�s� 10'a b�l�nd�  sonu� 1

4 n=1 de�eri 10'a b�l�n�p kalan� al�nd� sonu� 1 - 9 olan toplam de�erine 1 daha eklendi sonu� 10 - hane der�erine 1 daha eklendi sonu� 4 n say�s� 10'a b�l�nd� sonu� 0 
while negeatif oldu d�ng� bitti.

anlatabildiysem ne mutlu bana.
*/












