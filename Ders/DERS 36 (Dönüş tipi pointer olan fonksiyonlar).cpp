#include<stdio.h>
#include<string.h>

char *dondur(char *p, int indeks) { // Buradaki *p dizi nin ba��ndaki adresi tutuyor. Yani Y nin adresini tutuyor.
	
	int uzunluk = strlen(p);
	
	
	if(indeks > uzunluk) {
		
		return NULL;		
	}
	
	else {
		
		return (p+indeks); // indeks kadar ilerisindeki harfi d�nd�r demek
	}
		
}
// int *p = NULL; ----> bu de�er bana ilerde sorun ��karmas�n, kod hata vermesin demek. Null yerine 0 da koyabilirdik.

int main() {
	
	char dizi[] = "YAZILIM";
	
	char *k = dondur(dizi,2); // San�r�m buraya z nin adresini tan�mlad�k. (g�nclleme : Hay�r bence z yi tan�mlamad�k)
	
	if(k==NULL) {
		
		printf("Pointer NULL");
		
	}
	
	else {
		
		printf("%s",k);
	}
	
	return 0; 
}

/* Hocam bu programda kafana �unu sokman gerek: string ifadelerin pointer ler ile olna ili�kisi pointerlerin int ler veya diziler ile olna ili�kisinden
biraz farkl�. Mesela p dede�imize anlad���m kadar�yla adres basm�yor, de�er bas�yor. Pointer a string tan�mlarken ba��na & koymuyorsun falan. B�yle garip 
�eyler var�. S�Z�N �Z� STR�NG-PO�NTER �L��K�S�NE D�KKAT ET!!!*/

