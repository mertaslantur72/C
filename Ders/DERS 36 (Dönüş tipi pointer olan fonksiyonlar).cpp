#include<stdio.h>
#include<string.h>

char *dondur(char *p, int indeks) { // Buradaki *p dizi nin baþýndaki adresi tutuyor. Yani Y nin adresini tutuyor.
	
	int uzunluk = strlen(p);
	
	
	if(indeks > uzunluk) {
		
		return NULL;		
	}
	
	else {
		
		return (p+indeks); // indeks kadar ilerisindeki harfi döndür demek
	}
		
}
// int *p = NULL; ----> bu deðer bana ilerde sorun çýkarmasýn, kod hata vermesin demek. Null yerine 0 da koyabilirdik.

int main() {
	
	char dizi[] = "YAZILIM";
	
	char *k = dondur(dizi,2); // Sanýrým buraya z nin adresini tanýmladýk. (günclleme : Hayýr bence z yi tanýmlamadýk)
	
	if(k==NULL) {
		
		printf("Pointer NULL");
		
	}
	
	else {
		
		printf("%s",k);
	}
	
	return 0; 
}

/* Hocam bu programda kafana þunu sokman gerek: string ifadelerin pointer ler ile olna iliþkisi pointerlerin int ler veya diziler ile olna iliþkisinden
biraz farklý. Mesela p dedeðimize anladýðým kadarýyla adres basmýyor, deðer basýyor. Pointer a string tanýmlarken baþýna & koymuyorsun falan. Böyle garip 
þeyler varþ. SÖZÜN ÖZÜ STRÝNG-POÝNTER ÝLÝÞKÝSÝNE DÝKKAT ET!!!*/

